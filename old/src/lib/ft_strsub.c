/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:51:17 by ablin             #+#    #+#             */
/*   Updated: 2018/08/09 02:51:19 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libfunc.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (s == NULL || start == ft_strlen(s))
		return (NULL);
	if ((sub = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (s[i] != '\0' && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
