/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <msavaris@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:40:09 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/23 00:43:49 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	rangesize;
	int	i;
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
