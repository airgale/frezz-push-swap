/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:19:39 by mamann-l          #+#    #+#             */
/*   Updated: 2023/03/20 21:41:05 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temporal;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{	
			if (tab [j] < tab [i])
			{
				temporal = tab[i];
				tab[i] = tab[j];
				tab[j] = temporal;
			}	
		j++;
		}
	i++;
	}
}
