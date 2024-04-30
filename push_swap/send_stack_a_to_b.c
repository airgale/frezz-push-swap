/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_stack_a_to_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:13:21 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/27 01:18:25 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//trasladamos todos los nodos del stack a, al stack b.
//si el indice del nodo es menor que la mitad, se envia a b 
//directamente, si es mayor se rota en a, y al llegar al final, 
//se envia.
#include "push_swap.h"

t_list	fill_stack_b_but_trhee(t_list **stack_a, t_list **stack_b)
{
	int	size_stack;
	int	movemt;

	size_stack = ft_lstsize(*stack_a);
	movemt = 0;
	while (size_stack > 6)
	{
		if ((*stack_a)->index <= size_stack / 2)
		{
			pb(stack_a, stack_b);
			size_stack--;
		}
		else
			rotate_a(stack_a, 1);
	}
	while (size_stack > 3)
	{
		pb(stack_a, stack_b);
		size_stack--;
	}
	return (**stack_b);
}
