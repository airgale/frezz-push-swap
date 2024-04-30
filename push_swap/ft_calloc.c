/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:18:15 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/26 00:10:23 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*p;
	size_t	i;

	p = (char *)malloc(n * size);
	if (!p)
		return (0);
	i = 0;
	while (i < n * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	printf("%s\n", malloc(40));
// 	printf("%s\n", ft_calloc(10,4));
// 	printf("%s", calloc(10,4));
// }
