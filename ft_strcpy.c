/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:51:01 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/20 11:53:32 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

char	*ft_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
