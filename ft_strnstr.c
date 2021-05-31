/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:46:04 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:46:06 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hcount;
	size_t	nlen;

	hcount = 0;
	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char*)haystack);
	if (!len)
		return (0);
	while ((haystack[hcount] && len))
	{
		if (!(ft_strncmp(&haystack[hcount], needle, nlen)))
			return ((char*)&haystack[hcount]);
		if (nlen > len)
			return (0);
		hcount++;
		len--;
	}
	return (0);
}
