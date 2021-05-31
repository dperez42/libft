/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:37:07 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/20 19:37:17 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		cont;
	char		*a;

	a = (char*)s;
	cont = 1;
	while (cont <= n)
	{
		a[cont - 1] = 0;
		cont++;
	}
}