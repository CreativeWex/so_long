/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnidorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:57:46 by jnidorin          #+#    #+#             */
/*   Updated: 2022/04/15 18:57:50 by jnidorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*iterator;

	iterator = lst;
	if (lst == NULL)
		return (NULL);
	while (iterator -> next != NULL)
		iterator = iterator -> next;
	return (iterator);
}
