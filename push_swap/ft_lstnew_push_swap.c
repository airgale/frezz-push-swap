/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_push_swap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:10:29 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/26 00:28:14 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

t_list	*ft_lstnew(int *nb)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new ->value = (int)nb;
	new ->index = -1;
	new ->position = -1;
	new ->position_target = -1;
	new ->cost_a = -1;
	new ->cost_b = -1;
	new ->next = NULL;
	return (new);
}
