/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:05:26 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/23 11:52:41 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') &&
			(s2[i] != '\0') && (i < (int)n - 1))
		i++;
	return (s1[i] - s2[i]);
}
