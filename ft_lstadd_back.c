/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:00:08 by jfrances          #+#    #+#             */
/*   Updated: 2023/01/26 15:40:46 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nd;

	nd = *lst;
	if (!nd)
	{
		*lst = new;
		return ;
	}
	nd = ft_lstlast(nd);
	nd -> next = new;
}
