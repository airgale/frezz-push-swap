/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:11:19 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/27 00:13:13 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	cont;
	char	*s1;

	if (start > ft_strlen((int *)s))
		return (ft_calloc (1, 1));
	if (len + start > ft_strlen((int *)s))
		len = ft_strlen((int *)s) - start;
	cont = 0;
	s1 = (char *)malloc(len + 1);
	if (!s1)
		return (0);
	while (cont < len)
	{
		s1[cont] = s[cont + start];
		cont++;
	}
	s1[cont] = '\0';
	return (s1);
}
