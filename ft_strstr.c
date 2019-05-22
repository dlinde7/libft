/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:06:10 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/21 14:10:21 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

char	*ft_strstr(const char *haystack, const char *needle)
{
	int n;
	int i;

	n = 0;
	i = 0;
	if (needle[n] =='\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
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