/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:20:54 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/26 02:20:54 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lst_before_last(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->next->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack;
	if (!tmp)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	tmp2 = *stack;
	*stack = (*stack)->next;
	tmp->next = tmp2;
	tmp2->next = 0;
}

void	rr_r(t_list **stack_a, t_list **stack_b, int cost_a, int cost_b)
{
	while (cost_a < 0 && cost_b < 0)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		putstr("rrr\n");
		cost_a++;
		cost_b++;
	}
}

void	rr_a(t_list **stack_a, int cost_a)
{
	while (cost_a < 0)
	{
		reverse_rotate(stack_a);
		putstr("rra\n");
		cost_a++;
	}
}

void	rr_b(t_list **stack_a, int cost_b)
{
	while (cost_b < 0)
	{
		reverse_rotate(stack_a);
		putstr("rrb\n");
		cost_b++;
	}
}
