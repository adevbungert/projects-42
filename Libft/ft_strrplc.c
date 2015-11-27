/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrplc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abungert <abungert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:08:57 by abungert          #+#    #+#             */
/*   Updated: 2015/11/27 11:10:18 by abungert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrplc(char *s, char c1, char c2, char c3, char c_new)
{
	while (*s)
	{
		if (*s == c1 || *s == c2 || *s == c3)
			*s = c_new;
		s++;
	}
	return (s);
}