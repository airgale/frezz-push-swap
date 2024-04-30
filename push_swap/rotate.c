/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:20:35 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/26 02:20:35 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	if (!tmp || !tmp->next)
		return ;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *lst;
	*lst = tmp->next;
	tmp->next = 0;
}

void	rotate_a(t_list **stack_a, int cost_a)
{
	while (cost_a > 0)
	{
		rotate(stack_a);
		putstr("ra\n");
		cost_a--;
	}
}

void	rotate_b(t_list **stack_b, int cost_b)
{
	while (cost_b > 0)
	{
		rotate(stack_b);
		putstr("rb\n");
		cost_b--;
	}
}

void	rotate_r(t_list **stack_a, t_list **stack_b, int cost_b, int cost_a)
{
	while (cost_a > 0 && cost_b > 0)
	{
		rotate(stack_a);
		rotate(stack_b);
		putstr("rr\n");
		cost_b--;
		cost_a--;
	}
}
