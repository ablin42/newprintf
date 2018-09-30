/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 02:23:02 by ablin             #+#    #+#             */
/*   Updated: 2018/09/30 23:04:24 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"

int		main()
{
//	TO RUN ONE BY ONE
//	conv_tests();
//	width_tests();
//	preci_tests();
//	length_mod_tests();
//	mix_tests();
//	ub_tests();
//	random_tests();


printf(" %d\n", ft_printf("%#08x", 42));
printf(" %d\n\n", printf("%#08x", 42));

printf(" %d\n", ft_printf("%10X", 42));
printf(" %d\n\n", printf("%10X", 42));

	return (0);
}
