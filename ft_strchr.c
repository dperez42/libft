/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:44:39 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:44:41 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	pointer = (char*)s;
	while (*pointer != 0)
	{
		if (*pointer == c)
			return (pointer);
		pointer++;
	}
	if (c == 0)
		return (pointer);
	return (0);
}
