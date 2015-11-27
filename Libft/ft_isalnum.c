/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abungert <abungert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:35:03 by abungert          #+#    #+#             */
/*   Updated: 2015/11/25 15:25:43 by abungert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(char c)
{
	if ((ft_isdigit(c) == 1) && (ft_isalpha(c) == 1))
		return (1);
	else
		return (0);
}
