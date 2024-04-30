/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chek_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:36:36 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/12 13:36:36 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_free_ps(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j])
	{
		free(str[j]);
		str[j] = NULL;
		j++;
	}
	free(str);
}

int	argv_no_duplicates(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != 0)
	{
		j = 1;
		while (argv[j] != 0)
		{
			if (j != i && str_cmp(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	argv_nbr(char *argv)
{
	int	i;	

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
	{
		i++;
	}
	while ((argv[i] != '\0') && (argv[i] >= '0' && argv[i] <= '9'))
	{
		i++;
		return (1);
	}
	return (0);
}

void	check_array_of_arg(char **argv, t_all *all)
{
	int		i;
	long	nb;

	i = 1;
	while (argv[i] != NULL)
	{
		if (argv_nbr(argv[i]) == 0)
			EXIT_FAILURE;
		nb = ft_atoi(argv[i]);
		if (nb > 2147483647 || nb < -2147483648)
			EXIT_FAILURE ;
//		if (argv_no_duplicates(nb, stack_a) == 0)
//			EXIT_FAILURE ;
		all->stack[A] = ft_lstadd_back(&(all->stack[A]), ft_lstnew((int *)nb));
		i++;
	}
}

void	check_str_of_argv(char **argv, t_all *all)
{
	char	**array_of_str;
	int		size_array;

	size_array = 0;
	array_of_str = ft_split(argv[1], ' ');
	if (!array_of_str)
		EXIT_FAILURE;
	while (array_of_str[size_array] != NULL)
	{
		size_array++;
	}
	if (argv_no_duplicates(array_of_str))
		check_array_of_arg(array_of_str, all);
	ft_free_ps(array_of_str);
}
