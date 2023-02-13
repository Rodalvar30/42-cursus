/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodalvar <rodalvar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:26:57 by rodalvar          #+#    #+#             */
/*   Updated: 2023/02/13 17:55:34 by rodalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*temp;

	temp = (*a)->next;
	(*a)->next = (*a)->next->next;
	temp->next = *a;
	*a = temp;
}
