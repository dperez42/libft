/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:37:56 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:38:01 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;

	dest = (char*)dst;
	source = (char*)src;
	if (!dest && !source)
		return (0);
	while (n--)
		*dest++ = *source++;
	return (dst);
}
