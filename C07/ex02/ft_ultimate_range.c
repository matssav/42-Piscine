/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <msavaris@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:52:13 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/23 00:54:12 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	rangesize;
	int	*arrayint;

	i = 0;
	rangesize = max - min;
	arrayint = (int *) malloc(rangesize * sizeof(int));
	if (rangesize <= 0 || arrayint == NULL)
		return (0);
	while (i < rangesize)
	{
		arrayint[i] = min + i;
		i++;
	}
	return (arrayint);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (0);
	*range = ft_range(min, max);
	return (max - min);
}
