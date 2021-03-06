/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abungert <abungert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:22:39 by abungert          #+#    #+#             */
/*   Updated: 2016/04/29 10:35:59 by abungert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;

	i = ft_strlen(s1);
	while (*s2 && n > 0)
	{
		s1[i] = *s2;
		s2++;
		i++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
