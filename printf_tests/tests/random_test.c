/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 02:54:26 by ablin             #+#    #+#             */
/*   Updated: 2018/08/27 18:45:49 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main_test.h"

void		random_tests()
{
	printf(" %d\n", ft_printf("%04.2% et %lc titi",  256));
	printf(" %d\n\n", printf("%04.2% et %lc titi",  256));

	printf(" %d\n", ft_printf("%-+-12.7Dt%0 4i %04.2% et %lc titi", 125, 124, 256));
	printf(" %d\n\n", printf("%-+-12.7Dt%0 4i %04.2% et %lc titi", 125, 124, 256));
	
	printf(" %d\n", ft_printf("%-+-12.7Dt%0 4i %04.2% et %S titi", 125, 124, L"\x64\x65"));
	printf(" %d\n\n", printf("%-+-12.7Dt%0 4i %04.2% et %S titi", 125, 124, L"\x64\x65"));

	printf(" %d\n", ft_printf("%-+-12.7Dt%0 4i %04.2% et %S titi", 125, 124, L"\x64\x10ffff"));
	printf(" %d\n\n", printf("%-+-12.7Dt%0 4i %04.2% et %S titi", 125, 124, L"\x64\x10ffff"));
	
	printf(" %d\n", ft_printf("%20.ld et %.4hhi !", 0x11ffaa147, (signed char)-8));
	printf(" %d\n\n", printf("%20.ld et %.4hhi !", 0x11ffaa147, (signed char)-8));

	printf(" %d\n", ft_printf("%-+-12.7Dt%0 4i %04.2% et %lc titi", 125, 124, 256));
	printf(" %d\n\n", printf("%-+-12.7Dt%0 4i %04.2% et %lc titi", 125, 124, 256));

	printf(" %d\n", ft_printf("%C", 254));
	printf(" %d\n\n", ft_printf("%C", 254));
	
	printf(" %d\n", ft_printf("yo%2C xd %-12lc et %C titi %C tyty", 'u', 254, 256, 'a'));
	printf(" %d\n\n", printf("yo%2C xd %-12lc et %C titi %C tyty", 'u', 254, 256, 'a'));
		
	printf(" %d\n", ft_printf("yo%2C%-12lc et %s titi %C tyty", 'u', 254, "xd", 'a'));
	printf(" %d\n\n", printf("yo%2C%-12lc et %s titi %C tyty", 'u', 254, "xd", 'a'));

	printf(" %d\n", ft_printf("%lc", 254));
	printf(" %d\n\n", printf("%lc", 254));
					
	printf(" %d\n", ft_printf("%lc", 128));
	printf(" %d\n\n", printf("%lc", 128));


	printf(" %d\n", ft_printf("%C", 0xdfff));
	printf(" %d\n\n", printf("%C", 0xdfff));

	printf(" %d\n", ft_printf("%C", 0xbffe));
	printf(" %d\n\n", printf("%C", 0xbffe));

	ft_printf("NOW WITH SETLOCALE\n");
	setlocale(LC_ALL, "");
	printf(" %d\n", ft_printf("%---8C et coco %1C titi", 3250, 0xffff));
	printf(" %d\n\n", printf("%---8C et coco %1C titi", 3250, 0xffff));

	printf(" %d\n", ft_printf("%.3ls", L"\x53\x3abc\x81000\0"));
	printf(" %d\n\n", printf("%.3ls", L"\x53\x3abc\x81000\0"));

	printf(" %d\n", ft_printf("%8C et coco", 3250));
	printf(" %d\n\n", printf("%8C et coco", 3250));
	
	printf(" %d\n", ft_printf("%8C et MERDE", 0xd800));
	printf(" %d\n\n", printf("%8C et MERDE", 0xd800));

	printf(" %d\n", ft_printf("%8C et coco %s titi %lc", 3250, "xd", 'a'));
	printf(" %d\n\n", printf("%8C et coco %s titi %lc", 3250, "xd", 'a'));

	printf(" %d\n", ft_printf("%8C et coco %C titi %lc", 3250, 0x11ffff, 'a'));
	printf(" %d\n\n", printf("%8C et coco %C titi %lc", 3250, 0x11ffff, 'a'));
	
	printf(" %d\n", ft_printf("%6C et coco %C titi %C tyty", 3250, 0xd800, 'u'));
	printf(" %d\n\n", printf("%6C et coco %C titi %C tyty", 3250, 0xd800, 'u'));
	
	printf(" %d\n", ft_printf("%C", (wint_t)-2));
	printf(" %d\n\n", printf("%C", (wint_t)-2));
	
	printf(" %d\n", ft_printf("%C", 0xd800));
	printf(" %d\n\n", printf("%C", 0xd800));

	printf(" %d\n", ft_printf("%C", 0xdb02));
	printf(" %d\n\n", printf("%C", 0xdb02));

	printf(" %d\n", ft_printf("%C", 0x11ffff));
	printf(" %d\n\n", printf("%C", 0x11ffff));

	printf(" %d\n", ft_printf("%-+-12.7Dt", 125));
	printf(" %d\n\n", printf("%-+-12.7Dt", 125));

	printf(" %d\n", ft_printf("%0 4i", 124));
	printf(" %d\n\n", printf("%0 4i", 124));

	printf(" %d\n", ft_printf("%04.2% et"));
	printf(" %d\n\n", printf("%04.2% et"));
	
	printf(" %d\n", ft_printf("%lc titi", 256));
	printf(" %d\n\n", printf("%lc titi", 256));

	printf(" %d\n", ft_printf("<%00+10.4d>", 0));
	printf(" %d\n\n", printf("<%00+10.4d>", 0));
	
	printf(" %d\n", ft_printf("<%00+10.4d>", 1234));
	printf(" %d\n\n", printf("<%00+10.4d>", 1234));

	printf(" %d\n", ft_printf("toto et %02u coco %-5lu mimi", 19, (unsigned long)-20));
	printf(" %d\n\n", printf("toto et %02u coco %-5lu mimi", 19, (unsigned long)-20));

	printf(" %d\n", ft_printf("%#-8.3o", 0));
	printf(" %d\n\n", printf("%#-8.3o", 0));
	
	printf(" %d\n", ft_printf("%#2o", 0));
	printf(" %d\n\n", printf("%#2o", 0));

	printf(" %d\n", ft_printf("%04.2o", 0));
	printf(" %d\n\n", printf("%04.2o", 0));
	
	printf(" %d\n", ft_printf("%#1.2o", 0));
	printf(" %d\n\n", printf("%#1.2o", 0));

	printf(" %d\n", ft_printf("%0#14.0oo", 12587499));
	printf(" %d\n\n", printf("%0#14.0oo", 12587499));
	
	printf(" %d\n", ft_printf("%#08x", 42));
	printf(" %d\n\n", printf("%#08x", 42));
	
	printf(" %d\n", ft_printf("%#8x", 42));
	printf(" %d\n\n", printf("%#8x", 42));

	printf(" %d\n", ft_printf("test%#.4o et %02o %0#14.0o!!", 012, 036, 12587499));
	printf(" %d\n\n", printf("test%#.4o et %02o %0#14.0o!!", 012, 036, 12587499));
	
	printf(" %d u\n", ft_printf("<%u><%.u><%+-0 8.3u><%+#-0 8.3u>", 0, 0, 42, 42));
	printf(" %d u\n\n", printf("<%u><%.u><%+-0 8.3u><%+#-0 8.3u>", 0, 0, 42, 42));

	printf(" %d U\n", ft_printf("<%U><%.U><%+-0 8.3U><%+#-0 8.3U>", 0, 0, 42, 42));
	printf(" %d U\n\n", printf("<%U><%.U><%+-0 8.3U><%+#-0 8.3U>", 0, 0, 42, 42));
	
	printf(" %d o\n", ft_printf("<%o><%.o><%+-0 8.3o><%+#-0 8.3o>", 0, 0, 42, 42));
	printf(" %d o\n\n", printf("<%o><%.o><%+-0 8.3o><%+#-0 8.3o>", 0, 0, 42, 42));
	
	printf(" %d O\n", ft_printf("<%O><%.O><%+-0 8.3O><%+#-0 8.3O>", 0, 0, 42, 42));
	printf(" %d O\n\n", printf("<%O><%.O><%+-0 8.3O><%+#-0 8.3O>", 0, 0, 42, 42));
	
	printf(" %d x\n", ft_printf("<%x><%.x><%+-0 8.3x><%+#-0 8.3x>", 0, 0, 42, 42));
	printf(" %d x\n\n", printf("<%x><%.x><%+-0 8.3x><%+#-0 8.3x>", 0, 0, 42, 42));
	
	printf(" %d X\n", ft_printf("<%X><%.X><%+-0 8.3X><%+#-0 8.3X>", 0, 0, 42, 42));
	printf(" %d X\n\n", printf("<%X><%.X><%+-0 8.3X><%+#-0 8.3X>", 0, 0, 42, 42));
	
	printf(" %d p\n", ft_printf("<%p><%.p><%+-0 8.3p><%+#-0 8.3p>", 0, 0, 42, 42));
	printf(" %d p\n\n", printf("<%p><%.p><%+-0 8.3p><%+#-0 8.3p>", 0, 0, 42, 42));

	printf(" %d\n", ft_printf("<%#15.4O>", 42));
	printf(" %d\n\n", printf("<%#15.4O>", 42));
	
	printf(" %d\n", ft_printf("<%+#-0 8.3o>", 42));
	printf(" %d\n\n", printf("<%+#-0 8.3o>", 42));

	printf(" %d\n", ft_printf("<%+#-0 10.3o>", 256));
	printf(" %d\n\n", printf("<%+#-0 10.3o>", 256));

	printf(" %d\n", ft_printf("<%+++#-0 10.3o>", 1234567));
	printf(" %d\n\n", printf("<%+++#-0 10.3o>", 1234567));
}
