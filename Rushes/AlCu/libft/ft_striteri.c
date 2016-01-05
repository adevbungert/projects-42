/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:11:30 by jperrin           #+#    #+#             */
/*   Updated: 2015/11/29 16:10:06 by jperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int i, char *))
{
	unsigned int	i;

	i = 0;
	if (f && s)
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
}