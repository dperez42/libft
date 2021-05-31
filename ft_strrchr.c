/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:44:53 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:44:55 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	ch;

	len = ft_strlen(s);
	ch = (char)c;
	if (!*s && !c)
		return ((char*)&s[len]);
	if (!*s)
		return (0);
	if (!c)
		return ((char*)&s[len]);
	while (len > 0)
	{
		if (s[len - 1] == ch)
			return ((char*)&s[len - 1]);
		len--;
	}
	return (0);
}
