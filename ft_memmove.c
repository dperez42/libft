/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:38:51 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:38:54 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dp;
	unsigned const char	*sp;
	size_t				index;

	dp = (unsigned char*)dst;
	sp = (unsigned const char*)src;
	index = 0;
	if (!dst && !src)
		return (0);
	if ((dst || src) && len)
	{
		if (dp > sp)
		{
			while (++index <= len)
				dp[len - index] = sp[len - index];
		}
		else
		{
			while (len--)
				*dp++ = *sp++;
		}
	}
	return (dst);
}
