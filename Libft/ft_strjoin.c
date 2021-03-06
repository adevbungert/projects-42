/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abungert <abungert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 10:41:20 by abungert          #+#    #+#             */
/*   Updated: 2015/12/08 10:16:46 by abungert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;

	if (s1 != NULL && s2 != NULL)
	{
		string = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (string != NULL)
		{
			string = ft_strcpy(string, s1);
			return (ft_strcat(string, (char *)s2));
		}
	}
	return (NULL);
}
