/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:39:17 by rodalvar          #+#    #+#             */
/*   Updated: 2022/09/29 18:43:31 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_tmp;

	if (lst || del)
	{
		while (*lst)
		{
			lst_tmp = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = lst_tmp;
		}
		*lst = NULL;
	}
}
