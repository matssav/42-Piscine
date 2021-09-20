/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateussavaris <mateussavaris@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:00:00 by mateussavar       #+#    #+#             */
/*   Updated: 2021/09/20 15:00:29 by mateussavar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	destLen;
	int	i;

	destLen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[destLen + i] = src[i];
		i++;
	}
	dest[destLen + i] = '\0';
	return (dest);
}
