/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:49:47 by ablin             #+#    #+#             */
/*   Updated: 2018/08/09 02:49:48 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libfunc.h"

int		ft_putwstr(wchar_t *str)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	if (str == NULL || str == 0)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i] != '\0')
	{
		ret += ft_putwchar(str[i]);
		i++;
	}
	return (ret);
}
