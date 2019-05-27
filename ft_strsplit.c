/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:45:04 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/27 13:20:41 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *s, char c)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (s[n])
	{
		while (s[n] == c && s[n] != '\0')
			n++;
		if (s[n] != c && s[n] != '\0')
			i++;
		while (s[n] != c && s[n] != '\0')
			n++;
	}
	return ((int)i);
}

int		ft_wlen(const char *s, char c)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (s[n])
	{
		while (s[n] == c && s[n] != '\0')
			n++;
		while (s[n] != c && s[n] != '\0')
		{
			n++;
			i++;
		}
	}
	return ((int)i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**new;
	size_t	n;
	size_t	i;
	size_t	z;

	n = 0;
	i = 0;
	if (!s || !(new = (char **)malloc(sizeof(char *) *
					(ft_wordcount(s, c) + 1))))
		return (NULL);
	while ((int)n < ft_wordcount(s, c))
	{
		z = 0;
		if (!(new[n] = ft_strnew(ft_wlen(&s[i], c) + 1)))
			new[n] = NULL;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			new[n][z++] = s[i++];
		new[n][z] = '\0';
		n++;
	}
	new[n] = 0;
	return (new);
}
