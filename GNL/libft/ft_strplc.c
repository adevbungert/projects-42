/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abungert <abungert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:01:09 by abungert          #+#    #+#             */
/*   Updated: 2015/12/01 17:54:39 by abungert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strplc(char *s, char c, char c_new)
{
	while (*s)
	{
		if (*s == c)
			*s = c_new;
		s++;
	}
	return (s);
}
