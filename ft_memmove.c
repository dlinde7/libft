/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:22:52 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/24 14:59:46 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;
	size_t		n;

	s1 = (char *)dst;
	s2 = (const char *)src;
	if (s1 <= s2)
	{
		n = 0;
		while (n < len)
		{
			s1[n] = s2[n];
			n++;
		}
	}
	else
	{
		n = len;
		while (n > 0)
		{
			s1[n - 1] = s2[n - 1];
			n--;
		}
	}
	return (dst);
}
