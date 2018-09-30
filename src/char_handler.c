/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:36:00 by ablin             #+#    #+#             */
/*   Updated: 2018/09/02 20:39:02 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
** this function handle and print the flags for the c conversion specifier
*/

void	pf_c_padding(char *buf, t_arg lst, int *r, va_list ap)
{
	int		toprint;
	int		ret;
	char	c;

	if (lst.flag == 'c')
		c = va_arg(ap, int);
	else
		c = lst.flag;
	ret = lst.width;
	if (ret == 0)
		ret = 1;
	toprint = ret - 1;
	if (lst.mtag == 1)
		pf_add_to_buf(buf, c, 1);
	if (lst.ztag == 1 && lst.mtag == 0)
		pf_add_to_buf(buf, '0', toprint);
	else
		pf_add_to_buf(buf, ' ', toprint);
	if (lst.mtag == 0)
		pf_add_to_buf(buf, c, 1);
	*r += ret;
}

/*
** this function prints strings and handle the NULL cases
*/

int		pf_putstr_exc(char *str, t_arg lst)
{
	int		i;

	i = 0;
	if ((str == NULL || str == 0) && lst.preci == -1)//!is_there(wflag, '.'))
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(str);
	return (0);
}

/*
** this function handle the flags and print the result for strings with args
*/

void	pf_str_handler(char *buf, t_arg lst, int *r, va_list ap)
{
	int		toprint;
	char	*str;

	if (lst.flag == 's')
		str = pf_strdup(va_arg(ap, char *));
//	if (str != NULL && is_there(lst.wflag, '.') &&
//	ft_strlen(str) >= get_preci(lst.wflag))
	if (str != NULL && lst.preci > 0 && ft_strlen(str) >= lst.preci)
		str[lst.preci] = '\0';
	toprint = lst.width - ft_strlen(str);
	if (toprint >= 1)
		*r += toprint;
	if (lst.mtag == 1)
		*r += pf_putstr_exc(str, lst) + ft_strlen(str);
	if (lst.ztag == 1 && lst.mtag == 0)
		pf_add_to_buf(buf, '0', toprint);
	else
		pf_add_to_buf(buf, ' ', toprint);
	if (lst.mtag == 0)
		*r += pf_putstr_exc(str, lst) + ft_strlen(str);
	if (lst.flag == 's')
		free(str);
}
