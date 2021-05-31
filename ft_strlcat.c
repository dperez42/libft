/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:48:25 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:48:28 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	dlen;

	if (!dstsize)
		return (ft_strlen(src));
	index = 0;
	dlen = ft_strlen(dst);
	if (dstsize > dlen)
	{
		while (src[index] && (dlen + index < dstsize - 1))
		{
			dst[dlen + index] = src[index];
			index++;
		}
		dst[dlen + index] = 0;
		return (dlen + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}
