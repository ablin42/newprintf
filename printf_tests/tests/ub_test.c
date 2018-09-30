#include "../main_test.h"

void	ub_tests()
{
	// CHAR AND STR UB TESTS
	ft_printf("\x1B[32mUB TESTS FOR CHAR AND STR\x1B[0m\n");

	printf(" %d\n", ft_printf("{%-15Z}{%-15Ztr}{%10R}{%05s}", "abc"));
	printf(" %d\n\n", printf("{%-15Z}{%-15Ztr}{%10R}{%05s}", "abc"));

	printf(" %d\n", ft_printf("<%#+-c><%+ 05c><%#05.3c>", '4', '2', 'A'));
	printf(" %d\n\n", printf("<%#+-c><%+ 05c><%#05.3c>", '4', '2', 'A'));

	printf(" %d\n", ft_printf("<%s><%#+-s><%-+ 010s><%#--+10.5s>", 0, "UNDEFINED", "TESTS", "42"));
	printf(" %d\n\n", printf("<%s><%#+-s><%-+ 010s><%#--+10.5s>", 0, "UNDEFINED", "TESTS", "42"));

	// WIDE CHAR TESTS
	ft_printf("UB TESTS FOR WIDE CHAR\n");

	printf(" %d\n", ft_printf("<%C> <%C>", NULL, 0));
	printf(" %d\n\n", printf("<%C> <%C>", NULL, 0));

	printf(" %d\n", ft_printf("<--%#+010.5C--><--%#- 010.5C-->", L'\x277A', L'\x277A'));
	printf(" %d\n\n", printf("<--%#+010.5C--><--%#- 010.5C-->", L'\x277A', L'\x277A'));
	
	printf(" %d\n", ft_printf("<--%+++--+#5.10C-->", L'\x1F92E'));
	printf(" %d\n\n", printf("<--%+++--+#5.10C-->", L'\x1F92E'));

	// WIDE STRING UB TESTS
	ft_printf("UB TESTS FOR WIDE STRING\n");
	printf(" %d\n", ft_printf("<%S> <%S> <%S>", L"", NULL, 0));
	printf(" %d\n\n", printf("<%S> <%S> <%S>", L"", NULL, 0));
	
	printf(" %d\n", ft_printf("<--%+015.5S--><--%#- 015.5S-->", L"\x0041\x0470\x277A\x1F92E", L"\x0041\x0470\x277A\x1F92E"));
	printf(" %d\n\n", printf("<--%+015.5S--><--%#- 015.5S-->", L"\x0041\x0470\x277A\x1F92E", L"\x0041\x0470\x277A\x1F92E"));

	printf(" %d\n", ft_printf("<--%--+--5.15S-->", L"flinguez \x1F92E  moi"));
	printf(" %d\n\n", printf("<--%--+--5.15S-->", L"flinguez \x1F92E  moi"));

	// OCTAL, HEXADECIMAL AND P TESTS
	ft_printf("UB TESTS FOR OCTAL, HEXADECIMAL AND P\n");

	printf(" %d\n", ft_printf("<% x><%+x><% X><%+X><%+#-0 8.3x><%+#-0 8.3X>", 42, 42, 42, 42, 123, 456));
	printf(" %d\n\n", printf("<% x><%+x><% X><%+X><%+#-0 8.3x><%+#-0 8.3X>", 42, 42, 42, 42, 123, 456));

	printf(" %d\n", ft_printf("<% x><%+x><% X><%+X>", 42, 42, 42, 42));
	printf(" %d\n\n", printf("<% x><%+x><% X><%+X>", 42, 42, 42, 42));

	printf(" %d\n", ft_printf("<% p><%+p><%+#-0 10.3p><%+#-0 10.3p>", 42, 42, 42, &ft_putstr));
	printf(" %d\n\n", printf("<% p><%+p><%+#-0 10.3p><%+#-0 10.3p>", 42, 42, 42, &ft_putstr));

	printf(" %d\n", ft_printf("<% o><%+o><%+#-0 10.3o><%+++#-0 10.3o>", 42, 42, 256, 1234567));
	printf(" %d\n\n", printf("<% o><%+o><%+#-0 10.3o><%+++#-0 10.3o>", 42, 42, 256, 1234567));


	// INT TESTS
	ft_printf("UB TESTS FOR INT\n");

	printf(" %d\n", ft_printf("<% d><%+d><%+#-0 8.3d><%+#-0 8.3d>", 0, 42, 123, INT_MAX));
	printf(" %d\n\n", printf("<% d><%+d><%+#-0 8.3d><%+#-0 8.3d>", 0, 42, 123, INT_MAX));

	printf(" %d\n", ft_printf("<% d><%+d><%+#-0 8.3d><%+#-0 8.3d>", -0, -42, -123, INT_MIN));
	printf(" %d\n\n", printf("<% d><%+d><%+#-0 8.3d><%+#-0 8.3d>", -0, -42, -123, INT_MIN));

	// UNSIGNED INT TESTS
	ft_printf("UB TESTS FOR UNSIGNED INT\n");

	printf(" %d\n", ft_printf("<%u><% u><%+u><%+#-0 8.3u><%+#-0 8.3u>", -42, 0, 42, 123, UINT_MAX));
	printf(" %d\n\n", printf("<%u><% u><%+u><%+#-0 8.3u><%+#-0 8.3u>", -42, 0, 42, 123, UINT_MAX));
	

	// D O U TESTS
	ft_printf("UB TESTS FOR D O U\n");

	printf(" %d\n", ft_printf("<%+#-0 8.3D><%+#-0 3.8D><%+#0 3.8D><%+#-0 15.3D>", 0, -42L, 42, LONG_MAX));
	printf(" %d\n\n", printf("<%+#-0 8.3D><%+#-0 3.8D><%+#0 3.8D><%+#-0 15.3D>", 0, -42L, 42, LONG_MAX));
	
	printf(" %d\n", ft_printf("<%+#-0 8.3O><%+#-0 3.8O><%+#0 3.15O><%+#-0 15.3O>", 0, -42L, LONG_MIN, LONG_MAX));
	printf(" %d\n\n", printf("<%+#-0 8.3O><%+#-0 3.8O><%+#0 3.15O><%+#-0 15.3O>", 0, -42L, LONG_MIN, LONG_MAX));
	
	printf(" %d\n", ft_printf("<%+#-0 8.3U><%+#-0 3.8U><%+#0 3.8U><%+#-0 15.3U>", 0, -42, LONG_MIN, LONG_MAX));
	printf(" %d\n\n", printf("<%+#-0 8.3U><%+#-0 3.8U><%+#0 3.8U><%+#-0 15.3U>", 0, -42, LONG_MIN, LONG_MAX));

	//*/ INCOMPATIBLE VALUES TESTS
	ft_printf("UB TESTS FOR INCOMPATIBLE VALUES AND LENGTH MOD HELL\n");
	
	printf(" %d\n", ft_printf("<%d><%d><%d><%d>", LONG_MIN, "42", '4', LONG_MAX, 42));
	printf(" %d\n\n", printf("<%d><%d><%d><%d>", LONG_MIN, "42", '4', LONG_MAX,  42));
	
	printf(" %d\n", ft_printf("<%D><%D><%D><%D>", LONG_MIN, "42", '4', LONG_MAX, 42));
	printf(" %d\n\n", printf("<%D><%D><%D><%D>", LONG_MIN, "42", '4', LONG_MAX, 42));

	printf(" %d\n", ft_printf("<%u><%u><%u><%u>", -42, "42", '4', LONG_MAX, 42));
	printf(" %d\n\n", printf("<%u><%u><%u><%u>", -42, "42", '4', LONG_MAX, 42));

	printf(" %d\n", ft_printf("<%U><%U><%U><%U>", -42, "42", '4', LONG_MAX, 42));
	printf(" %d\n\n", printf("<%U><%U><%U><%U>", -42, "42", '4', LONG_MAX, 42));

	printf(" %d\n", ft_printf("<%x><%x><%x><%x>", -42, "42", '4', LONG_MAX, 42));
	printf(" %d\n\n", printf("<%x><%x><%x><%x>", -42, "42", '4', LONG_MAX, 42));

	printf(" %d\n", ft_printf("<%X><%X><%X><%X>", -42, "42", '4', LONG_MAX,  42));
	printf(" %d\n\n", printf("<%X><%X><%X><%X>", -42, "42", '4', LONG_MAX,  42));

	printf(" %d\n", ft_printf("<%o><%o><%o><%o>", -42, "42", '4', LONG_MAX, 42));
	printf(" %d\n\n", printf("<%o><%o><%o><%o>", -42, "42", '4', LONG_MAX, 42));

	printf(" %d\n", ft_printf("<%O><%O><%O><%O>", -42, "42", '4', LONG_MAX, 42));
	printf(" %d\n\n", printf("<%O><%O><%O><%O>", -42, "42", '4', LONG_MAX, 42));
	
	printf(" %d\n", ft_printf("<%p><%p><%p>", 42, "42", '4', -42, 42));
	printf(" %d\n\n", printf("<%p><%p><%p>", 42, "42", '4', -42, 42));

//	printf(" %d\n", ft_printf("<%#0+ hhlljzhld><%#0+ hhlljzhlD><%#0+ hhlljzhlu><%#0+ hhlljzhlU><%#0+ hhlljzhls><%#0+ hhlljzhlc><%#0+ hhlljzhlS><%#0+ hhlljzhlC><%#0+ hhlljzhlo><%#0+ hhlljzhlO><%#0+ hhlljzhlx><%#0+ hhlljzhlX>", 42, 42, 42, 42, "OK", '4', L"YES", L'4', 42, 42, 42, 42));
//	printf(" %d\n\n", printf("<%#0+ hhlljzhld><%#0+ hhlljzhlD><%#0+ hhlljzhlu><%#0+ hhlljzhlU><%#0+ hhlljzhls><%#0+ hhlljzhlc><%#0+ hhlljzhlS><%#0+ hhlljzhlC><%#0+ hhlljzhlo><%#0+ hhlljzhlO><%#0+ hhlljzhlx><%#0+ hhlljzhlX>", 42, 42, 42, 42, "OK", '4', L"YES", L'4', 42, 42, 42, 42));
	//*/
}
