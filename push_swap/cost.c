/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:24:15 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/27 01:18:06 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	absolut_value(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

void	get_cost(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmpa;
	t_list	*tmpb;
	int		sizea;
	int		sizeb;

	tmpa = *stack_a;
	tmpb = *stack_b;
	sizea = ft_lstsize(*stack_a);
	sizeb = ft_lstsize(*stack_b);
	while (tmpb)
	{
		tmpb->cost_b = tmpb->position;
		if (tmpb->position > sizeb / 2)
			tmpb->cost_b = (sizeb - tmpb->position) * -1;
		tmpb->cost_a = tmpa->position_target;
		if (tmpb->position_target > sizea / 2)
			tmpb->cost_a = (sizea - tmpa->position) * -1;
		tmpb = tmpb->next;
	}
}

void	low_cost(t_list **stack_b, int cost_a, int cost_b)
{
	t_list	*tmp;
	int		lowest;

	tmp = *stack_b;
	while (tmp)
	{
		if (absolut_value(tmp->cost_a) + absolut_value(tmp->cost_b)
			< absolut_value(lowest))
		{
			lowest = absolut_value(tmp->cost_a) + absolut_value(tmp->cost_b);
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
		}
		tmp = tmp->next;
	}
}
