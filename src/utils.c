/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:39:31 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 21:27:43 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	pf_itoa_base(char *buf, t_arg lst, uintmax_t n)
{
	int			i;
	uintmax_t	nb;
	char		*str;
	char		tab[17];

	if (n == 0)
	{
		pf_add_to_buf(buf, '0', 1);
		return ;
	}
	i = 1;
	nb = pf_divide_unb(lst, n);
	ft_strcpy(tab, "0123456789abcdef");
	if ((str = (char*)malloc(sizeof(char) * (nb + 1))) == NULL)
		return ;
	str[nb] = '\0';
	while (n != 0)
	{
		str[nb - i] = tab[n % lst.base];
		n /= lst.base;
		i++;
	}
	if (lst.flag == 'X')
		ft_strcat(buf, ft_strtoupper(str));
	else
		ft_strcat(buf, str);
	free(str);
}

char	*pf_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = 0;
	if (s1 == NULL && s1 == 0)
	{
		dest = pf_strdup("(null)");
		return (dest);
	}
	if ((dest = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1))) == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
** this function fetch the width value in str
*/

int		pf_get_pad(char *str, int end)
{
	int		i;
	int		total;

	i = 0;
	total = 0;
	if (str == NULL || ft_strcmp(str, "") == 0)
		return (0);
	while (str[i] != '\0' && i < end && (str[i] <= '0' || str[i] > '9'))
	{
		if (str[i] == '.')
			return (0);
		i++;
	}
	while (str[i] != '\0' && i < end && str[i] >= '0' && str[i] <= '9')
	{
		total = total + str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9' && str[i + 1] != '\0')
			total = total * 10;
		i++;
	}
	return (total);
}

/*
** this function fetch the precision value in str
*/

int		pf_get_preci(char *str, int end)
{
	int		i;
	int		total;

	i = 0;
	total = 0;
	if (str == NULL || ft_strcmp(str, "") == 0)//ispreci == 1
		return (0);
	while (str[i] != '\0' && str[i] != '.' && i < end)
		i++;
	if (i - 1 < (int)ft_strlen(str) || str[0] == '.')
		i++;
	while (str[i] != '\0' && i < end && str[i] >= '0' && str[i] <= '9')
	{
		total = total + str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9' && str[i + 1] != '\0')
			total = total * 10;
		i++;
	}
	return (total);
}

/*
** this function handle the '#' flag
*/

int		pf_htag(char *buf, t_arg lst, int signe, int mode)
{
	if (lst.htag == 1 || lst.flag == 'p')
	{
		if ((lst.flag == 'o' || lst.flag == 'O') && (signe != 0 ||
	(signe == 0 && lst.ispreci == 1 && lst.preci == 0)))
		{
			if (mode == 1)
				pf_add_to_buf(buf, '0', 1);
			return (1);
		}
		else if ((lst.flag == 'x' && signe != 0) || lst.flag == 'p')
		{
			if (mode == 1)
				ft_strcat(buf, "0x");
			return (2);
		}
		else if (lst.flag == 'X' && signe != 0)
		{
			if (mode == 1)
				ft_strcat(buf, "0X");
			return (2);
		}
	}
	return (0);
}
