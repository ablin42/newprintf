/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:39:31 by ablin             #+#    #+#             */
/*   Updated: 2018/08/09 02:47:00 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
** this function checks if the character c is present in the string wflag
*/

int		is_there(char *wflag, char c)
{
	int		i;

	i = 0;
	while (wflag != NULL && wflag[i] != '\0')
	{
		if (wflag[i] == c)
			return (1);
		i++;
	}
	return (0);
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
	if (!is_there(str, '.') || str == NULL || ft_strcmp(str, "") == 0)
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
