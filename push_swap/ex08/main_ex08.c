/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:04:51 by mamann-l          #+#    #+#             */
/*   Updated: 2023/03/21 12:11:26 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int arr[] = {5, 8, 9, 2, 4, 3};
	ft_sort_int_tab(arr, 6);
	printf("%i, %i, %i, %i, %i, %i", arr[0], arr[1],arr[2],arr[3],arr[4],arr[5]);
	return(0);
}
