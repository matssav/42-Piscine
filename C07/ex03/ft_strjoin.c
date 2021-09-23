/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <msavaris@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 01:09:35 by msavaris          #+#    #+#             */
/*   Updated: 2021/09/23 01:19:01 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*frankenstring;
	int		i;

	frankenstring = (char *) malloc(sizeof(strs));
	if (*frankenstring == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(frankenstring, strs[i]);
		i++;
		ft_strcat(frankenstring, sep);
	}
	return (frankenstring);
}
