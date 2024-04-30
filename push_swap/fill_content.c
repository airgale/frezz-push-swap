/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_content.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:13:39 by mamann-l          #+#    #+#             */
/*   Updated: 2024/04/30 21:46:08 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//int	ft_add_position(t_list *stack, ft_add_content)
//{
//	int	i;
//
//	i = 0;
//	if (stack)
//	{
//		while (stack->next != NULL)
//		{
//			(stack)->position = i;
//			stack = stack->next;
//		}
//		stack->position = i;
//		stack = stack->next;
//	}
//}

int	ft_highest_index(t_list **stack)
{
	t_list *tmp;
	int	highest_index;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->index > tmp->next->index)
		{
			highest_index = tmp->index;
			tmp = tmp->next;
		}
		else
			highest_index = tmp->next->index;
	}
	return (highest_index);
}
int	ft_lowest_index(t_list **stack)
{
	t_list *tmp;
	int	lowest_index;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->index < tmp->next->index)
			lowest_index = tmp->index;
		else
			lowest_index = tmp->next->index;
		tmp = tmp->next;
	}
	return (lowest_index);
}

void	add_position(t_list **stack)
{
	t_list	*tmp;
	int		i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
}
int	hig_index_position_target(t_list **stack_a, int index_b)
{
	int		target_index;
	int		target_position;
	t_list	*tmp;

	target_index = INT_MAX;
	target_position = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index > index_b && tmp->index < target_index)
		{
			target_index = tmp->index;
			target_position = tmp->position;
		}
		tmp = tmp->next;
	}
	if (target_index != INT_MAX)
		return (target_position);
	return (0);
}

int	low_index_position_target(t_list **stack_a, int index_b)
{
	int		target_index;
	int		target_position;
	t_list	*tmp;

	target_index = INT_MAX;
	target_position = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index < index_b && tmp->index < target_index)
		{
			target_index = tmp->index;
			target_position = tmp->position;
		}
		tmp = tmp->next;
	}
	return (target_position);
}

int	check_position_target(t_list **stack_a, int index_b)
{
	int		target_index;
	int		target_position;
	t_list	*tmp;

	target_index = INT_MAX;
	target_position = 0;
	tmp = *stack_a;
	if (hig_index_position_target(stack_a, index_b))
		return (target_position);
	tmp = *stack_a;
	if (low_index_position_target(stack_a, index_b))
		return (target_position);
	return (0);
}

void	add_position_target(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_b;
	int		position_target;

	tmp_b = *stack_b;
	position_target = 0;
	while (tmp_b)
	{
		position_target = check_position_target(stack_a, tmp_b->index);
		tmp_b->position_target = position_target;
		tmp_b = tmp_b->next;
	}
}
