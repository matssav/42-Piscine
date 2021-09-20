/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateussavaris <mateussavaris@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:48:01 by mateussavar       #+#    #+#             */
/*   Updated: 2021/09/20 15:00:40 by mateussavar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc > 1)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
