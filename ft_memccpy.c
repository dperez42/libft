/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:38:23 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:38:28 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		cont;
	char		*dest;
	char		*source;
	char		ch;

	cont = 0;
	ch = (unsigned char)c;
	dest = (char*)dst;
	source = (char*)src;
	if (n != 0)
	{
		while (n--)
		{
			dest[cont] = source[cont];
			if (source[cont] == ch)
				return (&dst[cont + 1]);
			cont++;
		}
	}
	return (0);
}
