/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:31:09 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/15 21:30:23 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

static int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strdup(const char *string)
{
	char	*dst;
	int		count;
	int		len;

	len = ft_strlen((char*)string);
	if (!(dst = malloc(len + 1)))
		return (0);
	count = 0;
	while (string[count] != '\0')
	{
		dst[count] = string[count];
		count++;
	}
	dst[count] = '\0';
	return (dst);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	l;
	size_t			i;

	i = 0;
	if (s == (void*)0)
		return (0);
	l = ft_strlen((char*)s);
	if (start > l)
		return (ft_strdup(""));
	if (l - start < len)
	{
		if (!(ptr = malloc((l - start) + 1)))
			return (0);
	}
	else if (!(ptr = malloc(len + 1)))
		return (0);
	while (s[i] != '\0' && i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
