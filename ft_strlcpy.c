/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:45:24 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:45:26 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	char	*sp;
	char	*dp;

	sp = (char*)src;
	dp = (char*)dst;
	cont = 0;
	if (src == (void*)0)
		return (0);
	if (dstsize)
	{
		while (cont < dstsize - 1 && sp[cont])
		{
			dp[cont] = sp[cont];
			cont++;
		}
		dst[cont] = 0;
	}
	return ((ft_strlen(src)));
}
