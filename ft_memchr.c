/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:39:39 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:39:43 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	find;

	string = (unsigned char*)s;
	find = (unsigned char)c;
	while (n--)
	{
		if (*string++ == find)
		{
			return ((void*)--string);
		}
	}
	return (0);
}
