/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:49:24 by ablin             #+#    #+#             */
/*   Updated: 2018/08/09 02:49:27 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libfunc.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s != NULL && s != 0 && s[i] != '\0')
		i++;
	write(1, s, i);
}
