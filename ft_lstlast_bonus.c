/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperez-z <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:22:00 by dperez-z          #+#    #+#             */
/*   Updated: 2019/11/16 18:36:12 by dperez-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == (void*)0)
		return ((void*)0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}
