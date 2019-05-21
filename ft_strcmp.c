/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:02:08 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/21 13:43:10 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

int		ft_strcmp(const char *s1, const char *s2)
{
	int n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0')
		n++;
	return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}
