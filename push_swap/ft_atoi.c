/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:55:08 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/26 00:10:29 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		if (sign == 1)
			num = num * 10 + str[i] - '0';
		else
			num = num * 10 - (str[i] - '0');
		i++;
	}
	return (num);
}

/*
int	main(void)
{
	char *str = "+-42";
	printf("%i\n", ft_atoi(str));
	printf("%i", atoi(str));
}*/
