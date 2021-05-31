/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:32:02 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/17 11:58:41 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

static int	ft_charishere(char const c, char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_izq(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && ft_charishere(s1[i], set) == 1)
		i++;
	return (i);
}

static int	ft_der(char const *s1, char const *set)
{
	int	j;

	j = ft_strlen(s1) - 1;
	while (j > 0 && ft_charishere(s1[j], set))
		j--;
	return (j);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (s1 == (void*)0)
		return (0);
	if (!set)
		return ((char*)s1);
	i = ft_izq(s1, set);
	j = ft_der(s1, set);
	if (j < i)
		return (ft_strdup(""));
	if (!(dst = malloc(j - i + 2)))
		return (0);
	while (k <= (j - i))
	{
		dst[k] = s1[i + k];
		k++;
	}
	dst[k] = '\0';
	return (dst);
}
