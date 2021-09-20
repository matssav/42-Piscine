/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateussavaris <mateussavaris@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 00:07:58 by mateussavar       #+#    #+#             */
/*   Updated: 2021/09/20 00:13:22 by mateussavar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	term;

	i = 0;
	while (i < n - 1 && (s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
		term = 0;
	}
	if (s1[i] != s2[i])
		term = s1[i] - s2[i];
	return (term);
}
