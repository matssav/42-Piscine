/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <msavaris@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 01:17:53 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/21 01:17:53 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	if (nb > 12 || nb < -12)
		return (0);
	while (nb >= 0 && i < nb - 1)
	{
		res = res * (nb - i);
		i++;
	}
	while (nb < 0 && i > nb - 1)
	{
		res = res * (nb - i);
		i--;
	}
	return (res);
}
