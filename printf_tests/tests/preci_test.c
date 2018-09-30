#include "../main_test.h"

void	preci_tests()
{
	// WIDE CHAR TESTS
	ft_printf("PRECISION TESTS FOR WCHAR (undefined behavior)\n");
	
	printf(" %d\n", ft_printf("<--%.C-->", L'\x0041'));
	printf(" %d\n\n", printf("<--%.C-->", L'\x0041'));

	printf(" %d\n", ft_printf("<--%.5C-->", L'\x0470'));
	printf(" %d\n\n", printf("<--%.5C-->", L'\x0470'));

	printf(" %d\n", ft_printf("<--%.10C-->", L'\x0470'));
	printf(" %d\n\n", printf("<--%.10C-->", L'\x0470'));

	printf(" %d\n", ft_printf("<--%.5C-->", L'H'));
	printf(" %d\n\n", printf("<--%.5C-->", L'H'));
	
	// WIDE STRING TESTS
	ft_printf("PRECISION TESTS FOR WSTRING (undefined behavior)\n");
	
	printf(" %d\n", ft_printf("<%.S><%.S><%.0S>", NULL, 0, 0));
	printf(" %d\n\n", printf("<%.S><%.S><%.0S>", NULL, 0, 0));

	printf(" %d\n", ft_printf("<%.4S><%.15S>", L"我是一只猫。", L"我是一只猫。"));
	printf(" %d\n\n", printf("<%.4S><%.15S>", L"我是一只猫。", L"我是一只猫。"));

	printf(" %d\n", ft_printf("<--%.5S--><--%.15S>", L"flinguezmoi", L"flinguezmoi"));
	printf(" %d\n\n", printf("<--%.5S--><--%.15S>", L"flinguezmoi", L"flinguezmoi"));
	
	// PRECISION TEST STR AND CHAR
	ft_printf("PRECISION TESTS FOR STRINGS AND CHAR\n");

	printf(" %d\n", ft_printf("<%s><%.s><%.0s>", NULL, NULL, NULL));
	printf(" %d\n\n", printf("<%s><%.s><%.0s>", NULL, NULL, NULL));
	
	printf(" %d\n", ft_printf("<%s><%.s><%.0s>", 0, 0, 0));
	printf(" %d\n\n", printf("<%s><%.s><%.0s>", 0, 0, 0));
	
	printf(" %d\n", ft_printf("<%s><%.s><%.0s>", "", "", ""));
	printf(" %d\n\n", printf("<%s><%.s><%.0s>", "", "", ""));

	printf(" %d\n", ft_printf("<%.3s><%.3s><%.8s><%.5s>", "Oof", "theater", "assassinate", "XD"));
	printf(" %d\n\n", printf("<%.3s><%.3s><%.8s><%.5s>", "Oof", "theater", "assassinate", "XD"));

	ft_printf("PRECISION TESTS FOR CHAR (undefined behavior)\n");
	printf(" %d\n", ft_printf("<%.0c><%.c><%.1c><%.3c>", 0, 0, '4', '2'));
	printf(" %d\n\n", printf("<%.0c><%.c><%.1c><%.3c>", 0, 0, '4', '2'));

	// PRECISION TESTS INT
	ft_printf("PRECISION TESTS FOR INT\n");

	printf(" %d\n", ft_printf("<%.d><%.0d><%5.d><%.d><%.0d>", 0, 0, 0, 42, 42));
	printf(" %d\n\n", printf("<%.d><%.0d><%5.d><%.d><%.0d>", 0, 0, 0, 42, 42));

	printf(" %d\n", ft_printf("<%.0d><%.1d><%.2d><%.2d><%.3d><%.3d>", 42, 42, 42, -42, 42, -42));
	printf(" %d\n\n", printf("<%.0d><%.1d><%.2d><%.2d><%.3d><%.3d>", 42, 42, 42, -42, 42, -42));

	// PRECISION TESTS UNSIGNED INT
	ft_printf("PRECISION TESTS FOR UNSIGNED INT\n");

	printf(" %d\n", ft_printf("<%.15u>", 2147483648));
	printf(" %d\n\n", printf("<%.15u>", 2147483648));

	printf(" %d\n", ft_printf("<%.u><%.0u><%.u><%.0u>", 0, 0, 42, 42));
	printf(" %d\n\n", printf("<%.u><%.0u><%.u><%.0u>", 0, 0, 42, 42));

	printf(" %d\n", ft_printf("<%.0u><%.1u><%.2u><%.2u><%.3u><%.3u>", 42, 42, 42, 133, 42, 133));
	printf(" %d\n\n", printf("<%.0u><%.1u><%.2u><%.2u><%.3u><%.3u>", 42, 42, 42, 133, 42, 133));
	
	// PRECISION TESTS OCTAL
	ft_printf("PRECISION TESTS FOR OCTAL\n");

	printf(" %d\n", ft_printf("<%.o><%.0o><%.o><%.0o>", 0, 0, 42, 42));
	printf(" %d\n\n", printf("<%.o><%.0o><%.o><%.0o>", 0, 0, 42, 42));
	
	printf(" %d\n", ft_printf("<%.0o><%.1o><%.2o><%.2o><%.3o><%.3o>", 42, 42, 42, 133, 42, 133));
	printf(" %d\n\n", printf("<%.0o><%.1o><%.2o><%.2o><%.3o><%.3o>", 42, 42, 42, 133, 42, 133));
	
	// PRECISION TESTS HEXADECIMAL
	ft_printf("PRECISION TESTS FOR HEXADECIMAL\n");

	printf(" %d\n", ft_printf("<%.x><%.0x><%.x><%.0x>", 0, 0, 42, 42));
	printf(" %d\n\n", printf("<%.x><%.0x><%.x><%.0x>", 0, 0, 42, 42));

	printf(" %d\n", ft_printf("<%.0x><%.1x><%.2x><%.2x><%.3x><%.3x>", 42, 42, 42, 133, 42, 133));
	printf(" %d\n\n", printf("<%.0x><%.1x><%.2x><%.2x><%.3x><%.3x>", 42, 42, 42, 133, 42, 133));

	printf(" %d\n", ft_printf("<%.X><%.0X><%.X><%.0X>", 0, 0, 42, 42));
	printf(" %d\n\n", printf("<%.X><%.0X><%.X><%.0X>", 0, 0, 42, 42));

	printf(" %d\n", ft_printf("<%.0X><%.1X><%.2X><%.2X><%.3X><%.3X>", 42, 42, 42, 133, 42, 133));
	printf(" %d\n\n", printf("<%.0X><%.1X><%.2X><%.2X><%.3X><%.3X>", 42, 42, 42, 133, 42, 133));

	// PRECISION TESTS FOR MEMORY ADRESS
	ft_printf("PRECISION TESTS FOR MEMORY ADRESS (undefined behavior)\n");

	printf(" %d\n", ft_printf("<%.0p><%.p><%.p>", 0, 0, &ft_putstr));
	printf(" %d\n\n", printf("<%.0p><%.p><%.p>", 0, 0, &ft_putstr));
	
	printf(" %d\n", ft_printf("<%.5p><%.10p><%.15p>", &ft_putstr, &ft_putchar, &ft_strcmp));
	printf(" %d\n\n", printf("<%.5p><%.10p><%.15p>", &ft_putstr, &ft_putchar, &ft_strcmp));

	// PRECISION TESTS FOR D O U
	ft_printf("PRECISION TESTS FOR D O U\n");

	printf(" %d\n", ft_printf("<%.D><%.0D><%.O><%.0O><%.U><%.0U>", 0, 0, 0, 0, 0, 0));
	printf(" %d\n\n", printf("<%.D><%.0D><%.O><%.0O><%.U><%.0U>", 0, 0, 0, 0, 0, 0));

	printf(" %d\n", ft_printf("<%.5D><%.5D><%.35D><%.35D>", 0, -1L, LONG_MIN, LONG_MAX));
	printf(" %d\n\n", printf("<%.5D><%.5D><%.35D><%.35D>", 0, -1L, LONG_MIN, LONG_MAX));
	
	printf(" %d\n", ft_printf("<%.5O><%.5O><%.35O><%.35O>", 0, LONG_MAX, LONG_MIN, LONG_MAX));
	printf(" %d\n\n", ft_printf("<%.5O><%.5O><%.35O><%.35O>", 0, LONG_MAX, LONG_MIN, LONG_MAX));
	
	printf(" %d\n", ft_printf("<%.5U><%.25U><%.25U>", 0, LONG_MAX, LONG_MAX));
	printf(" %d\n\n", printf("<%.5U><%.25U><%.25U>", 0, LONG_MAX, LONG_MAX));
}
