/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wide_char_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:40:33 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 20:58:07 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
** this function handle and print the flags for
** the C (wchar_t) conversion specifier
*/

void	pf_print_wchar(char *buf, t_arg lst, int *r, va_list ap)
{
	int			toprint;
	int			ret;
	wchar_t		c;

	c = va_arg(ap, wchar_t);
	ret = pf_wchar_len(c);
	if (ret == -1 || (c >= 55296 && c <= 57343) || c < 0 || c > 0x10FFFF)
	{
		*r = -1;
		return ;
	}
	if (buf != NULL)//not sure but i think its when we return -1 or sth
		ft_putstr(buf);//
	toprint = lst.width - ret;
	if (toprint > 0)
		ret += toprint;
	if (lst.mtag == 1)
		pf_add_to_buf(buf, c, 1);
	if (lst.ztag == 1 && lst.mtag == 0)
		pf_add_to_buf(buf, '0', toprint);
	else
		pf_add_to_buf(buf, ' ', toprint);
	if (lst.mtag == 0)
		pf_add_to_buf(buf, c, 1);
	*r += ret;//+ft_strlen(lst->buf);
}

/*
** this function prints a wide char string if called with the putwchar function
** else it simply returns the nb of char to be printed if called with wchar_len
*/

int		pf_putwstr_preci(wchar_t *str, t_arg lst, int (*func)(wchar_t))
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	if ((str == NULL || str == 0) && lst.ispreci == 0)
	{
		if (func == ft_putwchar)
			ft_putstr("(null)");//ft_putstr
		return (6);
	}
	while (str != NULL && str[i] != '\0')
	{
		if ((pf_wchar_len(str[i]) == -1 || (str[i] >= 55296 && str[i] <= 57343)
		|| str[i] < 0) || str[i] > 0x10FFFF)
			return (-1);
		if (lst.ispreci == 0
		|| (lst.ispreci == 1 && ret + pf_wchar_len(str[i]) <= lst.preci))
			ret += func(str[i]);
		if (ret == lst.preci)
			break ;
		i++;
	}
	return (ret);
}

/*
** this function prints a wide character string with its padding and precision
*/

void	pf_print_wstr(char *buf, t_arg lst, int *r, va_list ap)
{
	int			toprint;
	int			ret;
	wchar_t		*s;

	s = va_arg(ap, wchar_t *);
	ret = pf_putwstr_preci(s, lst, pf_wchar_len);
	if (ret == -1)
	{
		*r = -1;
		return ;
	}
	if (buf != NULL)//
		ft_putstr(buf);//
	toprint = lst.width - ret;
	if (toprint > 0)
		ret += toprint;
	if (lst.mtag == 1)
		pf_putwstr_preci(s, lst, ft_putwchar);
	if (lst.ztag == 1 && lst.mtag == 0)
		pf_add_to_buf(buf, '0', toprint);
	else
		pf_add_to_buf(buf, ' ', toprint);
	if (lst.mtag == 0)
		pf_putwstr_preci(s, lst, ft_putwchar);
	*r += ret;// + ft_strlen(lst->buf);
}
