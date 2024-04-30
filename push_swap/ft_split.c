/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:39:37 by mamann-l          #+#    #+#             */
/*   Updated: 2024/02/27 01:21:04 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int	ft_cont_word(char *s, char c)
{
	int	i;
	int	contword;
	int	flag;

	i = 0;
	flag = 0;
	contword = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
			flag = 1;
		if ((flag == 1 && s[i] == c) || (flag == 1 && s[i + 1] == '\0'))
		{
			contword++;
			flag = 0;
		}
		i++;
	}
	return (contword);
}

char	**ft_free(char **str, int j)
{
	while (j >= 0)
	{
		free(str[j]);
		j--;
	}
	free (str);
	return (NULL);
}

char	**ft_str_split(char **str, char c, char *s)
{
	int		j;
	size_t	len;

	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s != c && *s)
			{
				s++;
				len++;
			}
			str[j] = ft_substr(s - len, 0, len);
			if (str[j] == NULL)
				return (ft_free(str, j));
			j++;
		}
		else
			s++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char *s, char c)
{
	char	**str;
	int		j;

	str = (char **) malloc(sizeof(char *) * (ft_cont_word((char *)s, c) + 1));
	if (!str)
		return (0);
	j = 0;
	str = ft_str_split(str, c, (char *)s);
	return (str);
}

// int main(void)
// {
// 	char *s = "hello!zzzzzzzz";
// 	char	**strstr;
// 	int	j=0;
// 	printf("%i\n", ft_cont_word(s,'z'));
// 	strstr = ft_split(s,'z');
// 	while (strstr[j] != 0)
// 	{
// 		printf("%s\n", strstr[j]);
// 		j++;
// 	}
// }
// system("leaks -q ft_split");
