/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:39:02 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 23:26:32 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
** this function returns 1 if the flag is either oOxXuUp, else it returns 0
*/

int		pf_flag_exc(char flag)
{
	if (flag != 'o' && flag != 'O' && flag != 'x' && flag != 'X' && flag != 'u'
		&& flag != 'U' && flag != 'p')
		return (1);
	return (0);
}

/*
** this function handle the space and the '+' flag for numbers
*/

int		pf_blank_and_sign(char *buf, t_arg lst, uintmax_t size, int s,
		int toprint)
{
	int		retour;

	retour = 0;
	if ((lst.ptag == 1 || s == -1 || lst.stag == 1) && pf_flag_exc(lst.flag))
		toprint--;
	if (lst.ptag == 1 && s != -1 && lst.ztag == 1
	&& pf_flag_exc(lst.flag) && lst.preci <= 0)
		pf_add_to_buf(buf, '+', 1);
	if (lst.mtag == 0 && lst.ztag == 0 && lst.htag == 0)//&& lst.htag == 0
		pf_add_to_buf(buf, ' ', toprint);
	if (lst.ptag == 1 && s != -1 && lst.ztag == 0 && pf_flag_exc(lst.flag))
		pf_add_to_buf(buf, '+', 1);
	else if (lst.stag == 1 && lst.ptag == 0 && s != -1 && pf_flag_exc(lst.flag))
		pf_add_to_buf(buf, ' ', 1);
	if (toprint > 0)
		retour += toprint;
	if ((lst.stag == 1 || lst.ptag == 1 || s == -1) && pf_flag_exc(lst.flag))
		retour++;
	return (retour);
}

/*
** this function handle the precision and the '0' flag for numbers
*/

int		pf_precision_and_zero(char *buf, t_arg lst, uintmax_t size, int signe)
{
	int		toprint;

	toprint = lst.width - size - pf_htag(buf, lst, signe, 0);
	if (size < lst.preci)
		toprint = lst.width - lst.preci;
	if (lst.ptag == 1 || signe < 0 || lst.stag == 1)
		toprint--;
	if (signe < 0)
		pf_add_to_buf(buf, '-', 1);
	pf_to_print_s(buf, lst, toprint, signe);
	if (lst.ptag == 1 && signe != -1 && lst.ztag == 1
	&& pf_flag_exc(lst.flag) && lst.preci > 0)
		pf_add_to_buf(buf, '+', 1);
	if (lst.ispreci == 1 && signe == 0 && lst.preci == 0)
		return (pf_htag(buf, lst, signe, 0));
	toprint = lst.preci - size;
	if ((lst.flag == 'o' || lst.flag == 'O') && lst.htag == 1)
		toprint = lst.preci - size - pf_htag(buf, lst, signe, 0);
	pf_add_to_buf(buf, '0', toprint);//or here but doubt
	if (toprint > 0 && lst.ispreci == 1)
		return (toprint);
	return (0);
}

/*
** this function handle the '-' flag
*/

void	pf_minus_flag(char *buf, t_arg lst, int toprint, int signe)
{
	if (lst.mtag == 1)
	{
		if ((lst.ptag == 1 || lst.stag == 1)
		&& (lst.flag != 'd' && lst.flag != 'i' && lst.flag != 'D'))
			toprint++;
		if (lst.ptag == 1 || lst.stag == 1 || signe == -1)
			toprint--;
		pf_add_to_buf(buf, ' ', toprint);
	}
}
