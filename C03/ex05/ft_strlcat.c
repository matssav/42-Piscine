/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateussavaris <mateussavaris@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:31:22 by mateussavar       #+#    #+#             */
/*   Updated: 2021/09/20 12:32:20 by mateussavar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int	srclen;
	int	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size <= destlen)
		return (size + srclen);
	while (src[i] != '\0' && destlen + 1 < size)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return(ft_strlen(dest) + ft_strlen(&src[i]));
}
