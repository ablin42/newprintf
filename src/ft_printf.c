/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:36:41 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 21:20:16 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
** this function assigns each conversion specifier to a function adress
** and calls to the corresponding function for each flag
*/

void	pf_get_handler(char *buf, t_arg lst, int *retour, va_list ap)
{
	int					ret;
	int					i;
	static	const t_fun	handle[] = {INT, HEX, C, CC, S, SS};

	i = 0;
	ret = 0;
	while (i < 6)
	{
		if (ft_strchr(handle[i].conv, lst.flag) != NULL)
		{
			handle[i].handler(buf, lst, &ret, ap);
			if (ret == -1)
				*retour = 0;
			*retour += ret;
			return ;
		}
		i++;
	}
	pf_c_padding(buf, lst, &ret, ap);
	*retour += ret;
	return ;
}

/*
** this function calls the other main functions and returns
** the total nb of characters printed
*/

int		ft_printf(const char *restrict format, ...)
{
	t_arg	*lst;
	va_list	ap;

	if (ft_strcmp(format, "") == 0)
		return (0);
	va_start(ap, format);
	return (pf_cycle_format(&lst, (char *)format, ap));
}
