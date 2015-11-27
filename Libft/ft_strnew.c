/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abungert <abungert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:32:42 by abungert          #+#    #+#             */
/*   Updated: 2015/11/27 14:31:57 by abungert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	
	if((str = (char *)malloc(sizeof(*str) * size)) == NULL)
		return NULL;
	ft_strclr(str);
	return (str);
}