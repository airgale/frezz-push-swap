/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:50:09 by mamann-l          #+#    #+#             */
/*   Updated: 2024/04/30 20:31:53 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_index(t_list **stack)
{
	int		low_index;
	t_list	*tmp;
	int		size_stack;

	tmp = *stack;
	low_index = 1;
	size_stack = ft_lstsize(*stack);

	while(tmp->next)
	{
		if(tmp->value < INT_MAX && tmp->index == 0)
		{
			tmp->index = low_index;
			low_index++;
		}
		tmp = tmp->next;
	}
	tmp->index = size_stack;
}
/*void	add_index(t_list *stack_a, int size_stack)
{
	int		lowest;
	int		highest;
	int		value;
	t_list	*tmp;

	lowest = 1;
	value = 0;					//<--------- MIRA ESTO
	highest = size_stack;
	tmp = stack_a;
	while (tmp)
	{
		while (size_stack > 0)
		{
			if (tmp->value == INT_MIN && tmp->index == 0)
			{
				tmp->index = lowest;
				lowest--;
			}
			if (tmp->value > value && tmp->index == 0)
			{
				value = tmp->value;
				highest = tmp->index;		// En principio es el index, pero no estamos seguros
				tmp = stack_a;
			}
			else
				tmp = tmp->next;
		}
		if (highest != size_stack)
			tmp->index = size_stack;		// Mirar la lógica de esto
		size_stack--;
	}
}*/
/*
char	ft_swap(char *s, char *t)
{
	char temp;
	temp = *s;
	*s = *t;
	*t = temp;
}
char	ft_sort_index(char **argv)
{
	int i;
	int index;

	index = 1;
	i = 1;
	while(argv[i] != 0)
	{
		j = 1;
		while(argv[j] != 0)
		{
			if((i != j) && (str_cmp(argv[i], argv[j] > 0)))
				argv[i] = ft_swap(argv[i], argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	index = i;
	while(argv[i] != 0)
	{
		ft_lstiter(t_slack *new, new->index = i);
		i++;
	}
}
int	add_index(char **argv)// el indice se lo aplicamos a cada posición pero 
{								//le paso el nodo o le paso el argv?? 
	int i;

	i = 1;
	while(argv[i] != 0)
	*/