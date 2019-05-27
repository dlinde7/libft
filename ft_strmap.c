/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:43:28 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/27 10:48:23 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(s);
	new = (char *)malloc(sizeof(new) * n);
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
