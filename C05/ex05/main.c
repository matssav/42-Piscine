#include <stdio.h>

int		ft_sqrt(int index);

int		main(void)
{
	printf("-10 = %d (0)\n", ft_sqrt(-10));
	printf("576 = %d (0)\n", ft_sqrt(576));
	printf(" 841 = %d (0)\n", ft_sqrt(841));
	printf(" 121 = %d (1)\n", ft_sqrt(121));
	printf(" 16 = %d (0)\n", ft_sqrt(16));
	printf(" 25 = %d (0)\n", ft_sqrt(25));
	printf(" 36 = %d (2)\n", ft_sqrt(36));
	printf(" 49 = %d (3)\n", ft_sqrt(49));
	printf(" 81 = %d (4)\n", ft_sqrt(81));
	printf(" 900 = %d (5)\n", ft_sqrt(900));

}
