#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	char base[] = "yahwe";
	unsigned long c;

	c = 0;
	while (c < (sizeof(base) - 1))
	{
		ft_putnbr_base(c, base);
		c++;
	}
	c = 0;
	while (c < (sizeof(base) - 1))
	{
		ft_putnbr_base(c, base);
		c++;
	}
	printf("\n");
	ft_putnbr_base(666, base);
	printf("\n");
}
