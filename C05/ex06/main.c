#include <stdio.h>

int ft_is_prime(int nb);

int		main(void)
{
	printf("-10 = %d (0)\n", ft_is_prime(-10));
	printf("-1 = %d (0)\n", ft_is_prime(-1));
	printf(" 0 = %d (0)\n", ft_is_prime(0));
	printf(" 1 = %d (0)\n", ft_is_prime(1));
	printf(" 2 = %d (1)\n", ft_is_prime(2));
	printf(" 3 = %d (1)\n", ft_is_prime(3));
	printf(" 4 = %d (0)\n", ft_is_prime(4));
	printf(" 5 = %d (1)\n", ft_is_prime(5));
	printf(" 6 = %d (0)\n", ft_is_prime(93));
	printf(" 7 = %d (1)\n", ft_is_prime(43));
	printf(" 37 = %d (0)\n", ft_is_prime(37));
	printf(" 23 = %d (0)\n", ft_is_prime(23));
	printf(" 867 = %d (0)\n", ft_is_prime(867));
	printf(" 173 = %d (1)\n", ft_is_prime(173));

}
