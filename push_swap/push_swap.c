/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:08:24 by mamann-l          #+#    #+#             */
/*   Updated: 2024/04/30 21:56:14 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// add_index.c 
	//hay un error, value no se sabe qué tiene que hacer
	// highest no estamos seguros a qué hay que igualarlo, creemos que es "index"
	// Ver la lógica de cuando se añade el indice al indice de un nodo
void	ft_lstdel(t_list **lst)
{
	t_list	*next_node;

	while (*lst)
	{
		next_node = (*lst)->next;
		free(*lst);
		*lst = next_node;
	}
}

int	sorted(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	push_swap(t_list **stack_a, t_list **stack_b, int size_stack)
{
	if (size_stack == 2)
//		sa(stack_a);
	if (size_stack == 3)
//		sort_three(stack_a);
	printf("aiuda : %d\n", size_stack);
	if (size_stack > 3)
		sort(stack_a, stack_b);
}

void ft_init(t_all *all)
{
	all->stack = ft_calloc(sizeof(t_list *), 2);
}

void ft_print_list(t_all *all)
{
	t_list *tmp;
	
	tmp = all->stack[A];
	printf("Esto es A:\n");
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	printf("Esto es B:\n");
	tmp = all->stack[B];
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

int	main(int argc, char **argv)
{
	t_all	all;
	int		size_stack;

	if (argc < 2)
		return (EXIT_SUCCESS);
	ft_init(&all);
	if (argc == 2)
	{
		if (argv_no_duplicates(argv))
			check_str_of_argv(argv, &all);
	}
	if (argc > 2)
	{
		check_array_of_arg(argv, &all);
	}
	/*stack_a = fill_stack_a(argc, argv);*/
	if (sorted(&(all.stack[A])))
		return (EXIT_FAILURE);
	size_stack = ft_lstsize((all.stack[A]));
	printf("aiuda : %d\n", size_stack);
	add_index(&(all.stack[A]));
	push_swap(&(all.stack[A]), &(all.stack[B]), size_stack);
	ft_print_list(&all);
	if (!sorted(&(all.stack[A])))
		return (EXIT_FAILURE);
	ft_print_list(&all);
	ft_lstdel(&(all.stack[A]));
	ft_lstdel(&(all.stack[B]));
	return (EXIT_SUCCESS);
}
