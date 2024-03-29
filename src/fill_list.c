/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:36:14 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 23:21:03 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
** this function returns 1 or 0 depending on parameters, the mode variable
** differentiate the call from add_arg and fetch_arg
*/

int		pf_handle_exc(char *twflag, char *wflag, char flag)
{
	if (((flag == ' ' || flag == '#' || flag == '*' ||
	flag == '+' || flag == '-' || flag == '.' || flag == 'l' ||
	flag == 'j' || flag == 'h' || flag == 'z') ||
	(flag >= '0' && flag <= '9')) && flag != '\0')
		return (1);
	return (0);
}

int		pf_parse_mod(char *buf, t_arg lst, char *format, va_list ap)
{
	int		i;
	int		retour;

	i = 0;
	retour = 0;
	lst.mod = 0;
	while (format[i] != '\0' && format[i] != 'h' && format[i] != 'l'
	&& format[i] != 'j' && format[i] != 'z')
		i++;
	if (format[i] == 'h')
		lst.mod = H;
	if (format[i] == 'h' && format[i + 1] == 'h')
		lst.mod = HH;
	if (format[i] == 'l')
		lst.mod = L;
	if (format[i] == 'l' && format[i + 1] == 'l')
		lst.mod = LL;
	if (format[i] == 'j')
		lst.mod = J;
	if (format[i] == 'z')
		lst.mod = Z;
	if ((lst.flag == 'c' || lst.flag == 's') && lst.mod == 3)
		lst.flag = ft_toupper(lst.flag);
	pf_get_handler(buf, lst, &retour, ap);
//	printf("preci:[%d]\nwidth:[%d]\nhtag:[%d]\nztag:[%d]\nmtag:[%d]\nptag:[%d]\nstag:[%d]\nmod:[%d]\nflag:[%c]\n",
//	lst.preci, lst.width, lst.htag, lst.ztag, lst.mtag, lst.ptag, lst.stag, lst.mod, lst.flag);
	return (retour);
}

void	pf_parse_arg(t_arg *lst, char *buf, char *format, va_list ap)
{
	int		i;

	i = 0;
	while (pf_handle_exc(NULL, NULL, format[i]))
	{
		if (format[i] == '#')
			(*lst).htag = 1;
		if ((i == 0 && format[i] == '0')
		|| (i > 0 && format[i - 1] < 1 && format[i - 1] > 9))
			(*lst).ztag = 1;
		if (format[i] == '-')
			(*lst).mtag = 1;
		if (format[i] == '+')
			(*lst).ptag = 1;
		if (format[i] == ' ')
			(*lst).stag = 1;
		if (format[i] == '.')
			(*lst).ispreci = 1;
		i++;
	}
	(*lst).flag = format[i];
	if ((*lst).flag == 'x' || (*lst).flag == 'X' || (*lst).flag == 'p')
		(*lst).base = 16;
	if ((*lst).flag == 'o' || (*lst).flag == 'O')
		(*lst).base = 8;
	(*lst).preci = pf_get_preci(format, i);
	(*lst).width = pf_get_pad(format, i);
}

int		pf_set_arg(char *buf, char *format, va_list ap)
{
	t_arg	lst;

	lst.htag = 0;
	lst.ztag = 0;
	lst.mtag = 0;
	lst.ptag = 0;
	lst.stag = 0;
	lst.ispreci = 0;
	lst.preci = 0;
	lst.width = 0;
	lst.base = 10;
	pf_parse_arg(&lst, buf, format, ap);
	return (pf_parse_mod(buf, lst, format, ap));
}

int		pf_add_str_to_buf(char *buf, char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != '%')
		i++;
	buf = ft_strncat(buf, str, i);
	return (i);
}

/*
** this function cycle the printf arguments and call the corresponding function
** to place them in a list
*/

int		pf_cycle_format(t_arg **lst, char *format, va_list ap)
{
	char	*str;
	char	buf[BUFF_SIZE];
	int		retour;

	ft_memset(buf, '\0', BUFF_SIZE);
	retour = 0;
	str = format;
	*lst = NULL;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			retour += pf_set_arg(buf, str, ap);
			while (pf_handle_exc(NULL, NULL, *str))
				str++;
			str++;
		}
		if (*str != '%' && *str != '\0')
		{
			retour += pf_add_str_to_buf(buf, str);
			while (*str != '%' && *str != '\0')
				str++;
		}
	}
	ft_putstr(buf);
	return (retour);
}
