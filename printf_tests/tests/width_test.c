/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 01:23:37 by ablin             #+#    #+#             */
/*   Updated: 2018/08/25 21:27:16 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main_test.h"

void		width_tests()
{
	// WIDTH CHAR TESTS
	ft_printf("WIDTH TESTS FOR CHAR\n");

	printf(" %d\n", ft_printf("<%10c><%-3c><%5c><%-5c><%2c>", '4', '2', 'A', 'B', 0));
	printf(" %d\n\n", printf("<%10c><%-3c><%5c><%-5c><%2c>", '4', '2', 'A', 'B', 0));

	// WIDTH STR TESTS
	ft_printf("WIDTH TESTS FOR STRINGS\n");

	printf(" %d\n", ft_printf("<%10s><%10s><%-10s>", "Harbinger", "is their", "God."));
	printf(" %d\n\n", printf("<%10s><%10s><%-10s>", "Harbinger", "is their", "God."));
	
	printf(" %d\n", ft_printf("<%5s><%1s><%-10s>", "Embrace", "", "entropy"));
	printf(" %d\n\n", printf("<%5s><%1s><%-10s>", "Embrace", "", "entropy"));

	printf(" %d\n", ft_printf("<%-5s><%10s><%-3s>", "Death comes", "at last", "..."));
	printf(" %d\n\n", printf("<%-5s><%10s><%-3s>", "Death comes", "at last", "..."));
	
	printf(" %d\n", ft_printf("<This\tis\nan escape\\sequence.>"));
	printf(" %d\n\n", printf("<This\tis\nan escape\\sequence.>"));

	// WIDTH WIDE CHAR TESTS
	ft_printf("WIDTH TESTS FOR WCHAR\n");

	printf(" %d\n", ft_printf("<--%10C-->", L'\x0041'));
	printf(" %d\n\n", printf("<--%10C-->", L'\x0041'));

	printf(" %d\n", ft_printf("<--%-10C-->", L'\x0470'));
	printf(" %d\n\n", printf("<--%-10C-->", L'\x0470'));

	printf(" %d\n", ft_printf("<--%1C-->", L'\x1F92E'));
	printf(" %d\n\n", printf("<--%1C-->", L'\x1F92E'));

	//  WIDTH WIDE STRING TESTS
	ft_printf("WIDTH TESTS FOR WSTRINGS\n");

	printf(" %d\n", ft_printf("<%10S>", NULL));
	printf(" %d\n\n", printf("<%10S>", NULL));
	
	printf(" %d\n", ft_printf("<%-10S>", 0));
	printf(" %d\n\n", printf("<%-10S>", 0));

	printf(" %d\n", ft_printf("<--%15S-->", L"flinguezmoi"));
	printf(" %d\n\n", printf("<--%15S-->", L"flinguezmoi"));

	printf(" %d\n", ft_printf("<--%-25S-->", L"\x0041\x0470\x277A\x1F92E"));
	printf(" %d\n\n", printf("<--%-25S-->", L"\x0041\x0470\x277A\x1F92E"));
	
	// WIDTH INT TESTS
	ft_printf("WIDTH TESTS FOR INT\n");

	printf(" %d\n", ft_printf("<%10d><%4d><%30d><%10d>", 42, 10000, 10000, -42));
	printf(" %d\n\n", printf("<%10d><%4d><%30d><%10d>", 42, 10000, 10000, -42));

	printf(" %d\n", ft_printf("<%3d><%4d><%3d>", 13, -42, -42));
	printf(" %d\n\n", printf("<%3d><%4d><%3d>", 13, -42, -42));

	printf(" %d\n", ft_printf("<%+5d><%+5d><%+5d><%-+5d><%-+5d><%-+5d>", 0, +0, -0, 0, +0, -0));
	printf(" %d\n\n", printf("<%+5d><%+5d><%+5d><%-+5d><%-+5d><%-+5d>", 0, +0, -0, 0, +0, -0));
	
	printf(" %d\n", ft_printf("<%+02d><%+02d><%+03d><%+03d><%+05d><%+05d><% 04d>", 42, -42, 42, -42, 42, -42, 42));
	printf(" %d\n\n", printf("<%+02d><%+02d><%+03d><%+03d><%+05d><%+05d><% 04d>", 42, -42, 42, -42, 42, -42, 42));

	printf(" %d\n", ft_printf("<%+4d><%+4d><%+5d><%+5d><%+6d><%+6d>", 1998, -1998, 1998, -1998, 1998, -1998));
	printf(" %d\n\n", printf("<%+4d><%+4d><%+5d><%+5d><%+6d><%+6d>", 1998, -1998, 1998, -1998, 1998, -1998));
	
	printf(" %d\n", ft_printf("<%+-4d><%+-4d><%+-5d><%+-5d><%+-6d><%+-6d>", 1998, -1998, 1998, -1998, 1998, -1998));
	printf(" %d\n\n", printf("<%+-4d><%+-4d><%+-5d><%+-5d><%+-6d><%+-6d>", 1998, -1998, 1998, -1998, 1998, -1998));
	
	printf(" %d\n", ft_printf("<% 4d><% 4d><% 5d><% 5d><% 6d><% 6d>", 1337, -1337, 1337, -1337, 1337, -1337));
	printf(" %d\n\n", printf("<% 4d><% 4d><% 5d><% 5d><% 6d><% 6d>", 1337, -1337, 1337, -1337, 1337, -1337));

	printf(" %d\n", ft_printf("<%- 4d><%- 4d><%- 5d><%- 5d><%- 6d><%- 6d>", 1337, -1337, 1337, -1337, 1337, -1337));
	printf(" %d\n\n", printf("<%- 4d><%- 4d><%- 5d><%- 5d><%- 6d><%- 6d>", 1337, -1337, 1337, -1337, 1337, -1337));

	// WIDTH UNSIGNED INT TESTS
	ft_printf("WIDTH TESTS FOR UNSIGNED INT\n");

	printf(" %d\n", ft_printf("<%10u><%04u><%30u><%-10u>", 42, 10000, 10000, 42));
	printf(" %d\n\n", printf("<%10u><%04u><%30u><%-10u>", 42, 10000, 10000, 42));

	// WIDTH HEX TESTS
	ft_printf("WIDTH TESTS FOR HEXADECIMAL\n");

	printf(" %d\n", ft_printf("<%1x><%1X><%01x><%01X><%-1x><%-1X>", 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF));
	printf(" %d\n\n", printf("<%1x><%1X><%01x><%01X><%-1x><%-1X>", 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF));
	
	printf(" %d\n", ft_printf("<%030x><%30x><%-30x>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%030x><%30x><%-30x>", 0xFFFF, 0xFFFF, 0xFFFF));

	printf(" %d\n", ft_printf("<%030X><%30X><%-30X>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%030X><%30X><%-30X>", 0xFFFF, 0xFFFF, 0xFFFF));

	printf(" %d\n", ft_printf("<%#30X><%#30x><%#30x>", 0, 0, NULL));
	printf(" %d\n\n", printf("<%#30X><%#30x><%#30x>", 0, 0, NULL));
	
	printf(" %d\n", ft_printf("<%#030x><%#30x><%#-30x>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%#030x><%#30x><%#-30x>", 0xFFFF, 0xFFFF, 0xFFFF));
	
	printf(" %d\n", ft_printf("<%#030X><%#30X><%#-30X>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%#030X><%#30X><%#-30X>", 0xFFFF, 0xFFFF, 0xFFFF));

	// WIDTH OCTAL TESTS
	ft_printf("WIDTH TESTS FOR OCTAL\n");

	printf(" %d\n", ft_printf("<%#10x><%#10o><%#10o>", 0, 0, NULL));
	printf(" %d\n\n", printf("<%#10x><%#10o><%#10o>", 0, 0, NULL));

	printf(" %d\n", ft_printf("<%1o><%1O><%01o><%01O><%-1o><%-1O>", 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF));
	printf(" %d\n\n", printf("<%1o><%1O><%01o><%01O><%-1o><%-1O>", 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF));
	
	printf(" %d\n", ft_printf("<%010o><%10o><%-10o>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%010o><%10o><%-10o>", 0xFFFF, 0xFFFF, 0xFFFF));

	printf(" %d\n", ft_printf("<%010O><%10O><%-10O>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%010O><%10O><%-10O>", 0xFFFF, 0xFFFF, 0xFFFF));
	
	printf(" %d\n", ft_printf("<%#010o><%#10o><%#-10o>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%#010o><%#10o><%#-10o>", 0xFFFF, 0xFFFF, 0xFFFF));
	
	printf(" %d\n", ft_printf("<%#010O><%#10O><%#-10O>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%#010O><%#10O><%#-10O>", 0xFFFF, 0xFFFF, 0xFFFF));
	
	// WIDTH MEMORY ADDRESS TESTS
	ft_printf("WIDTH TESTS FOR MEMORY ADDRESS\n");
	
	printf(" %d\n", ft_printf("<%-33p><%25p><%-21p><%2p>", &ft_strlen, &ft_putwstr, &ft_putwchar, &ft_putstr));
	printf(" %d\n\n", printf("<%-33p><%25p><%-21p><%2p>", &ft_strlen, &ft_putwstr, &ft_putwchar, &ft_putstr));

	printf(" %d\n", ft_printf("<%5p><%-15p><%25p>", 0, 0, &ft_putstr));
	printf(" %d\n\n", printf("<%5p><%-15p><%25p>", 0, 0, &ft_putstr));

	// D O U conv tests
	ft_printf("BASIC TESTS FOR D O U\n");

	printf(" %d\n", ft_printf("<%+5D><%05D><%-35D><% 35D>", 0, -1L, LONG_MIN, LONG_MAX));
	printf(" %d\n\n", printf("<%+5D><%05D><%-35D><% 35D>", 0, -1L, LONG_MIN, LONG_MAX));
	
	printf(" %d\n", ft_printf("<%+5O><%05O><%-35O><% 35O>", 0, LONG_MAX, LONG_MIN, LONG_MAX));
	printf(" %d\n\n", ft_printf("<%+5O><%05O><%-35O><% 35O>", 0, LONG_MAX, LONG_MIN, LONG_MAX));
	
	printf(" %d\n", ft_printf("<%5U><%-30U><%030U>", 0, LONG_MAX, LONG_MAX));
	printf(" %d\n\n", printf("<%5U><%-30U><%030U>", 0, LONG_MAX, LONG_MAX));
}
