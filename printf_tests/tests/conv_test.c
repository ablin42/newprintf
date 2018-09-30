#include "../main_test.h"

void	conv_tests()
{
	char *str;

	// CHAR AND STR TESTS
	ft_printf("BASIC TESTS FOR CHAR AND STR\n");

	printf(" %d\n", ft_printf("<%c><%c><%c>",  0, 'X', '4'));
	printf(" %d\n\n", printf("<%c><%c><%c>",  0, 'X', '4'));
	
	printf(" %d\n", ft_printf("<%s><%s>",  0, NULL));
	printf(" %d\n\n", printf("<%s><%s>",  0, NULL));
	
	printf(" %d\n", ft_printf("<%s><%s>",  "lorem", "ipsum"));
	printf(" %d\n\n", printf("<%s><%s>",  "lorem", "ipsum"));
	
	// tests for escaping %
	printf(" %d\n", ft_printf("<this %s is 100%% aids %%%%>", "shit"));
	printf(" %d\n\n", printf("<this %s is 100%% aids %%%%>", "shit"));

	//  INT TESTS
	ft_printf("BASIC TESTS FOR  INT\n");

	printf(" %d\n", ft_printf("<%d><%d><%d>",  -42, 0, 42));
	printf(" %d\n\n", printf("<%d><%d><%d>", -42, 0, 42));
	
	printf(" %d\n", ft_printf("<%d><%d>", INT_MIN, INT_MAX));
	printf(" %d\n\n", printf("<%d><%d>", INT_MIN, INT_MAX));

	printf(" %d\n", ft_printf("<%i><%i><%i>",  -42, 0, 42));
	printf(" %d\n\n", printf("<%i><%i><%i>", -42, 0, 42));
	
	printf(" %d\n", ft_printf("<%i><%i>", INT_MIN, INT_MAX));
	printf(" %d\n\n", printf("<%i><%i>", INT_MIN, INT_MAX));

	// UNSIGNED INT TESTS
	ft_printf("BASIC TESTS FOR UNSIGNED INT\n");

	printf(" %d\n", ft_printf("<%u><%u><%u>",  0, 42, UINT_MAX));
	printf(" %d\n\n", printf("<%u><%u><%u>",  0, 42, UINT_MAX));

	// OCTAL, HEXADECIMAL AND P TESTS
	ft_printf("BASIC TESTS FOR OCTAL, HEXADECIMAL AND P\n");

	printf(" %d\n", ft_printf("<%x><%x><%x><%X><%X> ", 0, 13, 42, 255, UINT_MAX));
	printf(" %d\n\n", printf("<%x><%x><%x><%X><%X> ", 0, 13, 42, 255, UINT_MAX));

	printf(" %d\n", ft_printf("<%o><%o><%o> ", 0, 42, UINT_MAX));
	printf(" %d\n\n", printf("<%o><%o><%o> ", 0, 42, UINT_MAX));
	
	printf(" %d\n", ft_printf("<%p><%p><%p> ", 0, &ft_putstr, &str));
	printf(" %d\n\n", printf("<%p><%p><%p> ", 0, &ft_putstr, &str));

	// D O U conv tests
	ft_printf("BASIC TESTS FOR D O U\n");

	printf(" %d\n", ft_printf("<%D><%D><%D><%D>", 0, -1L, LONG_MIN, LONG_MAX));
	printf(" %d\n\n", printf("<%D><%D><%D><%D>", 0, -1L, LONG_MIN, LONG_MAX));
	
	printf(" %d\n", ft_printf("<%O><%O><%O>", 0, LONG_MAX, LONG_MIN));
	printf(" %d\n\n", printf("<%O><%O><%O>", 0, LONG_MAX, LONG_MIN));
	
	printf(" %d\n", ft_printf("%U %U", 0, LONG_MAX));
	printf(" %d\n\n", printf("%U %U", 0, LONG_MAX));
	
	// WIDE CHAR TESTS
	ft_printf("BASIC TESTS FOR WCHAR\n");

	printf(" %d\n", ft_printf("<--%C-->", NULL));
	printf(" %d\n\n", printf("<--%C-->", NULL));
	
	printf(" %d\n", ft_printf("<--%C-->", L'\x0041'));
	printf(" %d\n\n", printf("<--%C-->", L'\x0041'));

	printf(" %d\n", ft_printf("<--%C-->", L'\x0470'));
	printf(" %d\n\n", printf("<--%C-->", L'\x0470'));

	printf(" %d\n", ft_printf("<--%C-->", L'\x277A'));
	printf(" %d\n\n", printf("<--%C-->", L'\x277A'));
	
	printf(" %d\n", ft_printf("<--%C-->", L'\x1F92E'));
	printf(" %d\n\n", printf("<--%C-->", L'\x1F92E'));
	
	// WIDE STRING TESTS
	ft_printf("BASIC TESTS FOR WSTRING\n");
	
	printf(" %d\n", ft_printf("<%S>", NULL));
	printf(" %d\n\n", printf("<%S>", NULL));
	
	printf(" %d\n", ft_printf("<%S>", 0));
	printf(" %d\n\n", printf("<%S>", 0));

	printf(" %d\n", ft_printf("<--%S-->", L"flinguezmoi"));
	printf(" %d\n\n", printf("<--%S-->", L"flinguezmoi"));

	printf(" %d\n", ft_printf("<--%S-->", L"\x0041\x0470\x277A\x1F92E"));
	printf(" %d\n\n", printf("<--%S-->", L"\x0041\x0470\x277A\x1F92E"));
	
	printf(" %d\n", ft_printf("<--%S-->", L"flinguez \x1F92E  moi"));
	printf(" %d\n\n", printf("<--%S-->", L"flinguez \x1F92E  moi"));

	setlocale(LC_ALL, "en_US.UTF-8");
	ft_printf("NOW WITH SETLOCALE\n");
	// WIDE CHAR TESTS
	ft_printf("BASIC TESTS FOR WCHAR\n");

	printf(" %d\n", ft_printf("<--%C-->", NULL));
	printf(" %d\n\n", printf("<--%C-->", NULL));
	
	printf(" %d\n", ft_printf("<--%C-->", L'\x0041'));
	printf(" %d\n\n", printf("<--%C-->", L'\x0041'));

	printf(" %d\n", ft_printf("<--%C-->", L'\x0470'));
	printf(" %d\n\n", printf("<--%C-->", L'\x0470'));

	printf(" %d\n", ft_printf("<--%C-->", L'\x277A'));
	printf(" %d\n\n", printf("<--%C-->", L'\x277A'));
	
	printf(" %d\n", ft_printf("<--%C-->", L'\x1F92E'));
	printf(" %d\n\n", printf("<--%C-->", L'\x1F92E'));
	
	// WIDE STRING TESTS
	ft_printf("BASIC TESTS FOR WSTRING\n");
	
	printf(" %d\n", ft_printf("<%S>", NULL));
	printf(" %d\n\n", printf("<%S>", NULL));
	
	printf(" %d\n", ft_printf("<%S>", 0));
	printf(" %d\n\n", printf("<%S>", 0));

	printf(" %d\n", ft_printf("<--%S-->", L"flinguezmoi"));
	printf(" %d\n\n", printf("<--%S-->", L"flinguezmoi"));

	printf(" %d\n", ft_printf("<--%S-->", L"\x0041\x0470\x277A\x1F92E"));
	printf(" %d\n\n", printf("<--%S-->", L"\x0041\x0470\x277A\x1F92E"));
	
	printf(" %d\n", ft_printf("<--%S-->", L"flinguez \x1F92E  moi"));
	printf(" %d\n\n", printf("<--%S-->", L"flinguez \x1F92E  moi"));
}
