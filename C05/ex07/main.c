#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int	i;

	for (i = 0; i < 2147483647;)
	{
		printf("%d - ", ft_find_next_prime(i));
		i++;
	}


}
