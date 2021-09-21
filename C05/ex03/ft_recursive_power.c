/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <msavaris@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:53:39 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/21 11:14:59 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	rs;

	rs = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power <= 0 || rs > rs * nb)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (rs);
}
