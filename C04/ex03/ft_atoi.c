/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateussavaris <mateussavaris@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:59:36 by mateussavar       #+#    #+#             */
/*   Updated: 2021/09/20 15:00:37 by mateussavar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int	isneg;
	int	ret;

	i = 0;
	isneg = 1;
	ret = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			isneg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (str[i] - '0') + (ret * 10);
		i++;
	}
	return (ret * isneg);
}
