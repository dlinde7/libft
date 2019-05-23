/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:00:12 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/23 10:24:47 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

size_t		(char *dst, const char *src, size_t dstsize)
{
	size_t dlen;
	size_t slen;
	size_t n;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	n = 0;
	if (dlen >= dstsize)
		return (dstsize + slen);
	while (src[n] != '\0' && dlen + n - 1 < dstsize)
	{
		dst[dlen + n] = src[n];
		n++;
	}
	dst[dlen + n] = '\0';
	return (dlen + n);
}
