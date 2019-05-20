/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:20:55 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/20 16:27:46 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

char	*ft_strncat(char *s1, const char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int z;

	i = 0;
	z = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[z] != '\0' && z < n)
	{
		s1[i] = s2[z];
		i++;
		z++;
	}
	s1[i] = '\0';
	return (s1);
}
