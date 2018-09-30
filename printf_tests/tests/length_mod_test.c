#include "../main_test.h"

void	length_mod_tests()
{
	// hh modifier tests
	ft_printf("TESTS for hh modifier (signed)\n");

	printf(" %d\n", ft_printf("%hhd %hhd %hhi", CHAR_MAX, 128, 138));
	printf(" %d\n\n", printf("%hhd %hhd %hhi", CHAR_MAX, 128, 138));
	
	printf(" %d\n", ft_printf("%hhd %hhd %hhd %hhd", -138, -128, -42, -367));
	printf(" %d\n\n", printf("%hhd %hhd %hhd %hhd", -138, -128, -42, -367));
	
	printf(" %d\n", ft_printf("%hhD %hhD %hhO %hhO %hhU %hhU", 0, USHRT_MAX, 0, USHRT_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%hhD %hhD %hhO %hhO %hhU %hhU", 0, USHRT_MAX, 0, USHRT_MAX, 0, USHRT_MAX));
	
	ft_printf("TESTS for hh modifier (unsigned)\n");

	printf(" %d\n", ft_printf("%hhu %hhu", 0, UCHAR_MAX));
	printf(" %d\n\n", printf("%hhu %hhu", 0, UCHAR_MAX));

	printf(" %d\n", ft_printf("%hho %hho", 0, UCHAR_MAX + 42));
	printf(" %d\n\n", printf("%hho %hho", 0, UCHAR_MAX + 42));
	
	// h modifier tests
	ft_printf("TESTS for h modifier (signed)\n");

	printf(" %d\n", ft_printf("%hd %hd %hi", SHRT_MIN, SHRT_MAX, 42));
	printf(" %d\n\n", printf("%hd %hd %hi", SHRT_MIN, SHRT_MAX, 42));
	
	printf(" %d\n", ft_printf("%hd %hd %hd %hd", -138, -128, -42, -367));
	printf(" %d\n\n", printf("%hd %hd %hd %hd", -138, -128, -42, -367));

	printf(" %d\n", ft_printf("%hD %hD %hO %hO %hU %hU", 0, USHRT_MAX, 0, USHRT_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%hD %hD %hO %hO %hU %hU", 0, USHRT_MAX, 0, USHRT_MAX, 0, USHRT_MAX));

	ft_printf("TESTS for hh modifier (unsigned)\n");

	printf(" %d\n", ft_printf("%hu %hu", 0, USHRT_MAX));
	printf(" %d\n\n", printf("%hu %hu", 0, USHRT_MAX));

	printf(" %d\n", ft_printf("%ho %ho", 0, USHRT_MAX + 42));
	printf(" %d\n\n", printf("%ho %ho", 0, USHRT_MAX + 42));

	// l modifier tests
	ft_printf("TESTS for l modifier\n");

	printf(" %d\n", ft_printf("%ld %li", LONG_MAX, LONG_MAX));
	printf(" %d\n\n", printf("%ld %li", LONG_MAX, LONG_MAX));
	
	printf(" %d\n", ft_printf("%lc %ls", L'暖', L"لحم خنزير"));
	printf(" %d\n\n", printf("%lc %ls", L'暖', L"لحم خنزير"));
	
	printf(" %d\n", ft_printf("%ld %ld %ld %li", 0, 42, (long)INT_MIN - 1, (long)INT_MAX + 1));
	printf(" %d\n\n", printf("%ld %ld %ld %li", 0, 42, (long)INT_MIN - 1, (long)INT_MAX + 1));

	printf(" %d\n", ft_printf("%ld %li", LONG_MIN, LONG_MAX));
	printf(" %d\n\n", printf("%ld %li", LONG_MIN, LONG_MAX));
	
	printf(" %d\n", ft_printf("%lu %lu", 0, ULONG_MAX));
	printf(" %d\n\n", printf("%lu %lu", 0, ULONG_MAX));

	printf(" %d\n", ft_printf("%lo %lo", 0, ULONG_MAX));
	printf(" %d\n\n", printf("%lo %lo", 0, ULONG_MAX));

	// ll modifier tests
	ft_printf("TESTS for ll modifier (signed)\n");

	printf(" %d\n", ft_printf("%lld %lli %lli",  -42, 0, 42));
	printf(" %d\n\n", printf("%lld %lli %lli",  -42, 0, 42));

	printf(" %d\n", ft_printf("%lld %lli %llD %llD", LLONG_MIN, LLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%lld %lli %llD %llD", LLONG_MIN, LLONG_MAX, 0, USHRT_MAX));
	
	ft_printf("TESTS for ll modifier (unsigned)\n");
	
	printf(" %d\n", ft_printf("%llu %llu %llU, %llU", 0, ULLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%llu %llu %llU, %llU", 0, ULLONG_MAX, 0, USHRT_MAX));

	printf(" %d\n", ft_printf("%llx %llx %llX, %llX", 0, ULLONG_MAX, 0, ULLONG_MAX));
	printf(" %d\n\n", printf("%llx %llx %llX, %llX", 0, ULLONG_MAX, 0, ULLONG_MAX));
	
	printf(" %d\n", ft_printf("%llo %llo %llO, %llO", 0, ULLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%llo %llo %llO, %llO", 0, ULLONG_MAX, 0, USHRT_MAX));

	// j modifier tests
	ft_printf("TESTS for j modifier (signed)\n");

	printf(" %d\n", ft_printf("%jd %ji %ji",  -42, 0, 42));
	printf(" %d\n\n", printf("%jd %ji %ji",  -42, 0, 42));

	printf(" %d\n", ft_printf("%jd %ji %jD %jD", LLONG_MIN, LLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%jd %ji %jD %jD", LLONG_MIN, LLONG_MAX, 0, USHRT_MAX));
	
	ft_printf("TESTS for j modifier (unsigned)\n");
	
	printf(" %d\n", ft_printf("%ju %ju %jU, %jU", 0, ULLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%ju %ju %jU, %jU", 0, ULLONG_MAX, 0, USHRT_MAX));

	printf(" %d\n", ft_printf("%jx %jx %jX, %jX", 0, ULLONG_MAX, 0, ULLONG_MAX));
	printf(" %d\n\n", printf("%jx %jx %jX, %jX", 0, ULLONG_MAX, 0, ULLONG_MAX));
	
	printf(" %d\n", ft_printf("%jo %jo %jO, %jO", 0, ULLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%jo %jo %jO, %jO", 0, ULLONG_MAX, 0, USHRT_MAX));

	// z modifier tests
	ft_printf("TESTS for z modifier (signed)\n");

	printf(" %d\n", ft_printf("%zd %zi %zi",  -42, 0, 42));
	printf(" %d\n\n", printf("%zd %zi %zi",  -42, 0, 42));

	printf(" %d\n", ft_printf("%zd %zi %zD %zD", LLONG_MIN, LLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%zd %zi %zD %zD", LLONG_MIN, LLONG_MAX, 0, USHRT_MAX));
	
	ft_printf("TESTS for z modifier (unsigned)\n");
	
	printf(" %d\n", ft_printf("%zu %zu %zU, %zU", 0, ULLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%zu %zu %zU, %zU", 0, ULLONG_MAX, 0, USHRT_MAX));

	printf(" %d\n", ft_printf("%zx %zx %zX, %zX", 0, ULLONG_MAX, 0, ULLONG_MAX));
	printf(" %d\n\n", printf("%zx %zx %zX, %zX", 0, ULLONG_MAX, 0, ULLONG_MAX));
	
	printf(" %d\n", ft_printf("%zo %zo %zO, %zO", 0, ULLONG_MAX, 0, USHRT_MAX));
	printf(" %d\n\n", printf("%zo %zo %zO, %zO", 0, ULLONG_MAX, 0, USHRT_MAX));

}
