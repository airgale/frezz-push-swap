/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:13:01 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/26 22:43:09 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(int *s)
{
	size_t	n;
	int		*s1;

	s1 = (int *)s;
	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/*
int	main(void)
{
	printf("%i\n", ft_strlen(""));
	printf("%lu", strlen(""));
}
*/