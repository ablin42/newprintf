/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:38:24 by ablin             #+#    #+#             */
/*   Updated: 2018/08/22 03:52:36 by ablin            ###   ########.fr       */
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
	//if (is_there(lst->wflag, '.') && nb == 0 && lst.preci == 0)
	if (nb == 0 && lst.preci == 0)
		total = 0;
	*r += total;
	tp = lst.width - total;
	if (lst.preci >= 0 && total < lst.preci)
		tp = lst.width - lst.preci;
	*r += blank_and_sign(lst, pf_divide_nb(lst, nb), signe, tp);
	*r += precision_and_zero(lst, divide_nb(lst, nb), signe);
	if (nb < 0)
		nb *= -1;
	//if (!is_there(lst->wflag, '.') || get_preci(lst->wflag) != 0 || nb != 0)
	if (lst.preci <= 0 || lst.preci > 0 || nb != 0) //?? double preci condition 
		pf_itoa_base(buf, lst, nb);
	minus_flag(lst, tp, signe);
}

/*
** this function handle and print the width and call to the function that handle
** the other flags for unsigned nb
** this includes the conversion specifiers: (xXoOuUp)


void	hex_handler(t_arg *lst, va_list ap, int *r)
{
	int			total;
	int			toprint;
	uintmax_t	nb;
	int			signe;

	signe = 1;
	nb = pf_handle_ulength(lst, ap);
	if (nb == 0)
		signe = 0;
	total = divide_unb(nb, lst->base, lst->wflag) + htag(lst, signe, 0);
	if (is_there(lst->wflag, '.') && nb == 0 && get_preci(lst->wflag) == 0)
		total = 0;
	toprint = get_pad(lst->wflag) - total;
	if (total - htag(lst, signe, 0) < get_preci(lst->wflag))
		toprint = get_pad(lst->wflag) - get_preci(lst->wflag)
		- htag(lst, signe, 0);
	if (total - htag(lst, signe, 0) < get_preci(lst->wflag) &&
is_there(lst->wflag, '#') && (lst->flag == 'O' || lst->flag == 'o') && nb != 0)
		toprint++;
	*r += blank_and_sign(lst, divide_unb(nb, lst->base, lst->wflag)
		, signe, toprint) + total;
	*r += precision_and_zero(lst, divide_unb(nb, lst->base, lst->wflag), signe);
	if (!is_there(lst->wflag, '.') || get_preci(lst->wflag) != 0 || nb != 0)
		pf_itoa_base(nb, lst->base, lst->flag);
	minus_flag(lst, toprint, signe);
}*/
