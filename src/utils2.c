/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:40:00 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 23:25:21 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
** this function divide a nb by its divider and return the amount of time it
** can be divided by (intmax_t nb)
*/

int		pf_divide_nb(t_arg lst, intmax_t nb)
{
	int		i;

	i = 0;
	if (nb == 0)
	{
		if (lst.ispreci == 1 && lst.preci == 0)
			return (0);
		return (1);
	}
	while (nb != 0)
	{
		nb /= lst.base;
		i++;
	}
	return (i);
}

/*
** this function divide a nb by its divider and return the amount of time it
** can be divided by (uintmax_t nb)
*/

int		pf_divide_unb(t_arg lst, uintmax_t nb)
{
	int		ret;

	ret = 0;
	if (nb == 0)
	{
		if (lst.ispreci == 1 && lst.preci == 0)
			return (0);
		return (1);
	}
	while (nb != 0)
	{
		nb /= lst.base;
		ret++;
	}
	return (ret);
}

/*
** this function prints the char c times toprint
*/

int		pf_add_to_buf(char *buf, char c, int toprint)
{
	int		i;

	i = 0;
	while (toprint > 0)
	{
		while (buf[i] != '\0')
			i++;
		buf[i] = c;
		toprint--;
	}
	return (toprint);
}

/*
** this function prints '0' or ' ' times toprint depending on the flags
*/

void	pf_to_print_s(char *buf, t_arg lst, int toprint, int signe)
{
	int		printed;

	printed = 0;
	if (lst.ztag == 1 && (lst.ispreci == 0
	|| (lst.ispreci == 1 && lst.preci != 0)))
	{
		printed = 1;
		pf_htag(buf, lst, signe, 1);
	}
	if ((lst.ztag == 1 && lst.mtag == 0))// || lst.htag == 1)// ||lst.htag == 1
		while (toprint > 0)
		{
			if (lst.ztag == 1&& lst.ispreci == 0)// || lst.htag == 1
				pf_add_to_buf(buf, '0', 1);
			else
				pf_add_to_buf(buf, ' ', 1);
			toprint--;
		}
	if (printed == 0)
		pf_htag(buf, lst, signe, 1);
}

/*
** this function returns the size of a wchar_t
*/

int		pf_wchar_len(wchar_t c)
{
	if ((c <= 0x7F && MB_CUR_MAX >= 1) ||
	((c >= 128 && c <= 255) && MB_CUR_MAX == 1))
		return (1);
	else if (c <= 0x7FF && MB_CUR_MAX >= 2)
		return (2);
	else if (c <= 0xFFFF && MB_CUR_MAX >= 3)
		return (3);
	else if (c <= 0x10FFFF && MB_CUR_MAX >= 4)
		return (4);
	return (-1);
}
