#include "../main_test.h"

void	mix_tests()
{

	// WIDE CHAR TESTS
	
	// WIDE STRING TESTS

	// D O U TESTS

	// STR TESTS
	ft_printf("MIX FLAGS TEST FOR STR\n");

	printf(" %d\n", ft_printf("<%5.3s><%-5.3s><%13.8s>", "Oofballs", "theater", "assassinate"));
	printf(" %d\n\n", printf("<%5.3s><%-5.3s><%13.8s>", "Oofballs", "theater", "assassinate"));

	printf(" %d\n", ft_printf("<%10.5s><%5.10s><%10.10s>", "42", "98", "13"));
	printf(" %d\n\n", printf("<%10.5s><%5.10s><%10.10s>", "42", "98", "13"));

	printf(" %d\n", ft_printf("<%10.5s><%+05.10s>", "123456", "123456"));
	printf(" %d\n\n", printf("<%10.5s><%5.10s>", "123456", "123456"));
	
	// INT TESTS
	ft_printf("MIX FLAGS TEST FOR INT\n");

	printf(" %d\n", ft_printf("<%-10.5d><% -6.3d><%-3.6d><%-5.10d>", 42, 42, -42, -42));
	printf(" %d\n\n", printf("<%-10.5d><% -6.3d><%-3.6d><%-5.10d>", 42, 42, -42, -42));

	printf(" %d\n", ft_printf("<%+5.5d><%5.5d><%3.4d><% 4.3d>", 13, -13, -13, 13));
	printf(" %d\n\n", printf("<%+5.5d><%5.5d><%3.4d><% 4.3d>", 13, -13, -13, 13));

	printf(" %d\n", ft_printf("<%-.5d><%5.5d><%10.5d>", 42, -42, -42));
	printf(" %d\n\n", printf("<%-.5d><%5.5d><%10.5d>", 42, -42, -42));

	printf(" %d\n", ft_printf("<%015.4d><%4.15d><%15.4d><%8.4d>", 424242, 424242424, -424242, -424242424));
	printf(" %d\n\n", printf("<%015.4d><%4.15d><%15.4d><%8.4d>", 424242, 424242424, -424242, -424242424));
	
	printf(" %d\n", ft_printf("<%+---+3d><%--++3d>", 123, -123));
	printf(" %d\n\n", printf("<%+---+3d><%--++3d>", 123, -123));

	// UNSIGNED INT TESTS
	ft_printf("MIX FLAGS TEST FOR UNSIGNED INT\n");

	printf(" %d\n", ft_printf("<%-10.5d><%-6.3d><%-3.6d><%-5.10d>", 42, 42, -42, -42));
	printf(" %d\n\n", printf("<%-10.5d><%-6.3d><%-3.6d><%-5.10d>", 42, 42, -42, -42));
	
	printf(" %d\n", ft_printf("<%15.4u><%4.15u><%15.4u><%8.4u>", 424242, 424242424, 424242424, 77777));
	printf(" %d\n\n", printf("<%15.4u><%4.15u><%15.4u><%8.4u>", 424242, 424242424, 424242424, 77777));

	printf(" %d\n", ft_printf("<%05.5u><%5.5u><%3.4u><%4.3u>", 13, 133, 133, 13));
	printf(" %d\n\n", printf("<%05.5u><%5.5u><%3.4u><%4.3u>", 13, 133, 133, 13));

	printf(" %d\n", ft_printf("<%-.5u><%5.5u><%10.5u>", 42, 422, 422));
	printf(" %d\n\n", printf("<%-.5u><%5.5u><%10.5u>", 42, 422, 422));

	// OCTAL TESTS
	ft_printf("MIX FLAGS TEST FOR OCTAL\n");

	printf(" %d\n", ft_printf("<%#.o><%#.0o><%#.x><%#.0x>", 0, 0, 0, 0));
	printf(" %d\n\n", printf("<%#.o><%#.0o><%#.x><%#.0x>", 0, 0, 0, 0));

	printf(" %d\n", ft_printf("<%#.4O><%#15.4O><%#4.15O><%#.0O>", 42, 42, 42, 0));
	printf(" %d\n\n", printf("<%#.4O><%#15.4O><%#4.15O><%#.0O>", 42, 42, 42, 0));

	printf(" %d\n", ft_printf("<%.4O><%15.4O><%4.15O><%.0O>", 42, 42, 42, 0));
	printf(" %d\n\n", printf("<%.4O><%15.4O><%4.15O><%.0O>", 42, 42, 42, 0));

	printf(" %d\n", ft_printf("<%-.5o><%5.5o><%10.5o>", 42, 422, 422));
	printf(" %d\n\n", printf("<%-.5o><%5.5o><%10.5o>", 42, 422, 422));

	printf(" %d\n", ft_printf("<%.4o><%.4o><%15.4o><%15.4o>", 42, 123456, 42, 123456));
	printf(" %d\n\n", printf("<%.4o><%.4o><%15.4o><%15.4o>", 42, 123456, 42, 123456));

	printf(" %d\n", ft_printf("<%08.4o><%#-4.15o><%4.15o><%4.8o>", 424242424, 42, 424242, 424242424));
	printf(" %d\n\n", printf("<%08.4o><%#-4.15o><%4.15o><%4.8o>", 424242424, 42, 424242, 424242424));

	printf(" %d\n", ft_printf("<%5.10o><%15.10o><%-.10o>", 0xFFFF, 0xFFFF, 0xFFFF));
	printf(" %d\n\n", printf("<%5.10o><%15.10o><%-.10o>", 0xFFFF, 0xFFFF, 0xFFFF));
	
	// HEXADECIMAL TESTS
	ft_printf("MIX FLAGS TEST FOR HEXADECIMAL\n");

	printf(" %d\n", ft_printf("<%.4x><%.4x><%#15.4x><%15.4x>", 42, 123456, 42, 123456));
	printf(" %d\n\n", printf("<%.4x><%.4x><%#15.4x><%15.4x>", 42, 123456, 42, 123456));

	printf(" %d\n", ft_printf("<%8.4x><%4.15x><%4.15x><%4.8x>", 424242424, 42, 424242, 424242424));
	printf(" %d\n\n", printf("<%8.4x><%4.15x><%4.15x><%4.8x>", 424242424, 42, 424242, 424242424));
	
	printf(" %d\n", ft_printf("<%-.5x><%5.5x><%10.5x>", 42, 422, 422));
	printf(" %d\n\n", printf("<%-.5x><%5.5x><%10.5x>", 42, 422, 422));
	
	printf(" %d\n", ft_printf("<%.4X><%015.4X><%#4.15X><%.0X>", 42, 42, 42, 0));
	printf(" %d\n\n", printf("<%.4X><%015.4X><%#4.15X><%.0X>", 42, 42, 42, 0));
	// MEMORY ADRESS TESTS
	ft_printf("MIX FLAGS TEST FOR MEMORY ADRESS\n");

	printf(" %d\n", ft_printf("<%-9p><%9p><%-9p><%9p>", &ft_putstr, &ft_putstr, &ft_strcmp, &ft_strcmp));
	printf(" %d\n\n", printf("<%-9p><%9p><%-9p><%9p>", &ft_putstr, &ft_putstr, &ft_strcmp, &ft_strcmp));
}
