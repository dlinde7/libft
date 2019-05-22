/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:29:59 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/21 14:38:44 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int n;
	int i;

	n = 0;
	i = 0;
	if (needle[n] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < (int)len)
	{
		while (haystack[i + n] == needle[n] && needle[n] != '\0')
			n++;
		if (needle[n] == '\0')
			return ((char *)haystack + i);
		n = 0;
		i++;
	}
	return (0);
}