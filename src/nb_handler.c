/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:38:24 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 21:06:59 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
** this function handle and print the width and call to the function that handle
** the other flags for signed nb
** this includes the conversion specifiers: (dDi)
*/

void	pf_int_handler(char *buf, t_arg lst, int *r, va_list ap)
{
	int			tp;
	int			total;
	intmax_t	nb;
	int			signe;

	signe = 1;
	nb = pf_handle_length(lst, ap);
	if (nb == 0)
		signe = 0;
	if (nb < 0)
		signe = -1;
	total = pf_divide_nb(lst, nb) + pf_htag(buf, lst, signe, 0);
	if (lst.ispreci == 1 && nb == 0 && lst.preci == 0)
		total = 0;
	*r += total;
	tp = lst.width - total;
	if (lst.preci >= 0 && total < lst.preci)
		tp = lst.width - lst.preci;
	*r += pf_blank_and_sign(buf, lst, pf_divide_nb(lst, nb), signe, tp);
	*r += pf_precision_and_zero(buf, lst, pf_divide_nb(lst, nb), signe);
	if (nb < 0)
		nb *= -1;
	if (lst.ispreci == 0 || lst.preci != 0 || nb != 0)
		pf_itoa_base(buf, lst, nb);
	pf_minus_flag(buf, lst, tp, signe);
}

/*
** this function handle and print the width and call to the function that handle
** the other flags for unsigned nb
** this includes the conversion specifiers: (xXoOuUp)
*/

void	pf_hex_handler(char *buf, t_arg lst, int *r, va_list ap)
{
	int			total;
	int			toprint;
	uintmax_t	nb;
	int			signe;

	signe = 1;
	nb = pf_handle_ulength(lst, ap);
	if (nb == 0)
		signe = 0;
	total = pf_divide_unb(lst, nb) + pf_htag(buf, lst, signe, 0);
	if (lst.ispreci == 1 && nb == 0 && lst.preci == 0)
		total = 0;
	toprint = lst.width - total;
	if (total - pf_htag(buf, lst, signe, 0) < lst.preci)
		toprint = lst.width - lst.preci - pf_htag(buf, lst, signe, 0);
	if (total - pf_htag(buf, lst, signe, 0) < lst.preci &&
	lst.htag == 1 && (lst.flag == 'O' || lst.flag == 'o') && nb != 0)
		toprint++;
	*r += pf_blank_and_sign(buf, lst, pf_divide_unb(lst, nb)
		, signe, toprint) + total;
	*r += pf_precision_and_zero(buf, lst, pf_divide_unb(lst, nb), signe);
	if (lst.ispreci == 0 || lst.preci != 0 || nb != 0)
		pf_itoa_base(buf, lst, nb);
	pf_minus_flag(buf, lst, toprint, signe);
}
