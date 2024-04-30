/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:24:58 by mamann-l          #+#    #+#             */
/*   Updated: 2024/04/30 22:14:04 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void ft_print_list_b(t_list *stack)
{
	t_list *tmp;
	
	printf("Esto es B:\n");
	tmp = stack;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}
void	accions(t_list **stack_a, t_list **stack_b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		rr_r(stack_a, stack_b, cost_a, cost_b);
	if (cost_a > 0 && cost_b > 0)
		rotate_r(stack_a, stack_b, cost_a, cost_b);
	if (cost_a < 0)
		rr_a(stack_a, cost_a);
	if (cost_a > 0)
		rotate_a(stack_a, cost_a);
	if (cost_b < 0)
		rr_b(stack_b, cost_b);
	if (cost_b > 0)
		rotate_b(stack_b, cost_b);
	if (cost_a == 0 && cost_b == 0)
		pa(stack_a, stack_b);
}
void	sort_tree(t_list **stack_a)
{
	int	highest_index;

	if(sorted(stack_a))
		return ;
	highest_index = ft_highest_index(stack_a);
	if ((*stack_a)->index == highest_index)
		rotate_a(stack_a, 1);
	if ((*stack_a)->next->index == highest_index)
		rr_a(stack_a, 1);
	if ((*stack_a)->index > (*stack_a)->next->index)
		swap_a(stack_a);
}
void sort(t_list **stack_a, t_list **stack_b)
{
	int size_stack;
	int cost_a;
	int	cost_b;
	int	lowest_index_pos;

	cost_a = 0;
	cost_b = 0;
	
	fill_stack_b_but_trhee(stack_a, stack_b);
	printf("esto es stack_b");
	ft_print_list_b(*stack_b);
	while (*stack_b)
	{
		add_position(stack_a);
		add_position_target(stack_a, stack_b);
		get_cost(stack_a, stack_b);
		low_cost(stack_b, cost_a, cost_b);
		accions(stack_a, stack_b, cost_a, cost_b);
	}
	if (!sorted(stack_a))
	{
		lowest_index_pos = ft_lowest_index(stack_a);
		size_stack = ft_lstsize(*stack_a);
//		posición indice más bajo
//		si la posición es en la mitad superior... rotate_a;
//		si la posición es en la mitad inferior.... rr_a;
		printf("aiuda : %d\n", size_stack);
		printf("aiuda : %d\n", lowest_index_pos);
		if (lowest_index_pos > size_stack / 2)
			rr_a(stack_a, 1);
		if (lowest_index_pos < size_stack / 2)
			rotate_a(stack_a, 1);
	}
}