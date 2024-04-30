/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:04:12 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/25 23:45:35 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "push_swap.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	char	*str11;
	char	*str12;
	size_t	i;
	size_t	rst;

	str11 = (char *)str1;
	str12 = (char *)str2;
	i = 0;
	rst = 0;
	while ((str11[i] != '\0' || str12[i] != '\0') && (i < n))
	{
		if (str11[i] != str12[i])
		{
			rst = ((unsigned char)str11[i] - (unsigned char)str12[i]);
			return (rst);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str11[30] = "\200";
// 	char str12[30] = "\0";
// 	printf("%i\n", ft_strncmp(str11, str12, 6));
// 	printf("%i", strncmp(str11, str12, 3));
// 	return (0);
// }
