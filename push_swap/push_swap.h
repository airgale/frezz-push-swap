/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamann-l <mamann-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 02:22:07 by mamann-l          #+#    #+#             */
/*   Updated: 2024/04/30 20:24:57 by mamann-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>
/*# include <limits.h>*/

# define EXIT_FAILURE 1
# define EXIT_SUCCESS 0

# define INT_MIN -2147483648
# define INT_MAX 2147483647

/*typedef struct s_stack
{
	void	*content;
	int			value;
	int			index;
	int			position;
	int			targ_post;
	int			costa;
	int			costb;
	struct s_stack	*next;
}					t_stack;*/

typedef struct s_list
{
	int				value;
	int				index;
	int				position;
	int				position_target;
	int				cost_a;
	int				cost_b;
	struct s_list	*next;
}	t_list;

enum e_stack{
	A,
	B
};

typedef struct s_all
{
	t_list	**stack;
}	t_all;

void	push_swap(t_list **stack_a, t_list **stack_b, int size_stack);
int		sorted(t_list **stack_a);
void	ft_lstdel(t_list **lst);
int		absolut_value(int i);
void	get_cost(t_list **stack_a, t_list **stack_b);
void	low_cost(t_list **stack_b, int cost_a, int cost_b);
void	add_index(t_list **stack);
void	add_position(t_list **stack);
int		check_position_target(t_list **stack_a, int index_b);
int		hig_index_position_target(t_list **stack_a, int index_b);
int		low_index_position_target(t_list **stack_a, int index_b);
int		ft_lowest_index(t_list **stack);
int		ft_highest_index(t_list **stack);
void	add_position_target(t_list **stack_a, t_list **stack_b);
/*t_list	*fill_stack_a(int argc, char **argv);*/
void	check_array_of_arg(char **argv, t_all *all);
void	check_str_of_argv(char **argv, t_all *all);
void	ft_free_ps(char **str);
t_list	fill_stack_b_but_trhee(t_list **stack_a, t_list **stack_b);
int		argv_no_duplicates(char **argv);
int		str_cmp(char *s1, char *s2);
int		argv_nbr(char *argv);
int		check_argv(char **argv);
int		ft_atoi(const char *str);
t_list	*ft_lstnew(int *nb);
t_list	*ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
char	**ft_split(char *s, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	*ft_calloc(size_t n, size_t size);
size_t	ft_strlen(int *s);
int		str_cmp(char *s1, char *s2);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lst_before_last(t_list *lst);
void	accions(t_list **stack_a, t_list **stack_b, int cost_a, int cost_b);
int		ft_highest_index(t_list **stack);
void 	sort(t_list **stack_a, t_list **stack_b);
void	sort_tree(t_list **stack_a);
void	reverse_rotate(t_list **stack);
void	rr_r(t_list **stack_a, t_list **stack_b, int cost_a, int cost_b);
void	rr_a(t_list **stack_a, int cost_a);
void	rr_b(t_list **stack_a, int cost_b);
void	rotate(t_list **lst);
void	rotate_a(t_list **stack_a, int cost_a);
void	rotate_b(t_list **stack_b, int cost_b);
void	rotate_r(t_list **stack_a, t_list **stack_b, int cost_b, int cost_a);
void	push(t_list **a1, t_list **a2);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void 	swap_a(t_list **stack_a);
void	swap(t_list **stack);
void 	swap_b(t_list **stack_b);
void	putstr(char *s);
//char	*ft_strjoin(char *s1, char *s2);
//char	*ft_strdup(const char *s1);
//size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif