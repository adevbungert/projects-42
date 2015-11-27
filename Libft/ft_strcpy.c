/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abungert <abungert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:16:24 by abungert          #+#    #+#             */
/*   Updated: 2015/11/27 14:03:24 by abungert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char		*s1;
	char		*s2;

	s2 = (char *)src;
	s1 = dst;
	while ((*s1++ = *s2++) != '\0')
		;
	return (dst);
}