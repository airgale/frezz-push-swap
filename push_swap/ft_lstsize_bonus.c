/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:10:12 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/26 22:17:56 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		cont;

	cont = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp -> next;
		cont++;
	}
	return (cont);
}
