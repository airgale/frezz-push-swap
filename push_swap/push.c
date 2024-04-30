/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:21:03 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/26 02:21:03 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push(t_list **a1, t_list **a2)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*a1 == NULL)
		return ;
	tmp = *a1;
	(*a1) = (*a1)->next;
	tmp2 = *a2;
	*a2 = tmp;
	(*a2)->next = tmp2;
}

/*void	push(t_list **a1, t_list **a2)
{
	t_list	*tmp;

	if (*a1 == NULL)
		return ;
	tmp = (*a1)->next;
	*a2 = *a1;
	*a1 = tmp;
}*/

void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	putstr("pb\n");
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	putstr("pa\n");
}