/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispalma- <ispalma-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:58:43 by ispalma-          #+#    #+#             */
/*   Updated: 2024/02/20 11:49:56 by ispalma-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	next = NULL;
	if (lst == NULL || *lst == NULL)
	{
		return ;
	}
	while (current != NULL)
	{
		next = current->next;
		if (current->content != NULL)
		{
			del(current->content);
		}
		free(current);
		current = next;
	}
	*lst = NULL;
}
