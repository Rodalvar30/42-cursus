/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:47:39 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/29 19:33:32 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*lst_tmp;

	if (!lst || !f)
		return (NULL);
	lst_tmp = NULL;
	while (lst)
	{
		lst_new = ft_lstnew((*f)(lst->content));
		if (!lst_new)
		{
			ft_lstclear(&lst_tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_tmp, lst_new);
		lst = lst -> next;
	}
	return (lst_tmp);
}
