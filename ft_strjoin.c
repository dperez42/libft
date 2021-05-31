/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:58:28 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/15 19:44:08 by dperez-z         ###   ########.fr       */
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

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*str;
	int		i;

	if (s1 == (void*)0)
		return (0);
	l1 = ft_strlen((char*)s1);
	l2 = ft_strlen((char*)s2);
	if (!(str = malloc(l1 + l2 + 2)))
		return (0);
	i = 0;
	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < l2)
	{
		str[l1 + i] = s2[i];
		i++;
	}
	str[l1 + i] = '\0';
	return (str);
}
