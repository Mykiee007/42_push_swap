/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:10:45 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/29 17:58:49 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static void free_split(char **s)
{
	int	i;

	if (!s)
		return;
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

void	str_to_lst(char **input_list, ps_list **lst)
{
	int	i;
	int	number;
	ps_list *node;

	// separate the function
	// validate the input_list properly. handle invalid
	// clean up if in case failed in the middle of the transfering
	// handle when pointer is null?
	// check if we really want an integer or a string of numbers. 

	i = 0;
	while (input_list[i] != NULL)
	{
		number = ft_atoi(input_list[i]);  
		node = ps_doublelst_new(number);
		if (!node)
			return;
		ps_doublelst_add_back(lst,node);
		i++;
	}
}
	
int main(int argc, char **argv)
{
	ps_list **lst_a;
	ps_list *head;
	char	**split;
	char	*str1;

	head = NULL;
	lst_a = &head;
	if (argc == 1)
	{
		ft_printf("input a valid argument");
		return (0);
	}
	str1 = ps_input_to_str(argv);
	split = ft_split(str1, ' ');
	if (!ps_check_integer(split))
	{
		ft_printf("input an integer\n");
		return 0;
	}
	str_to_lst(split,lst_a);
	ps_print_lst(lst_a);
	ft_printf("distance from head to min content: %d\n", ps_index_of_min(*lst_a));
	if (ps_check_ascend(*lst_a))
		ft_printf("Ascending: Yes\n");
	else
		ft_printf("Ascending: No\n");
	if (ps_check_repeat(*lst_a))
		ft_printf("repeat: No\n");
	else
		ft_printf("repeat: Yes\n");
	free(str1);
	free_split(split);
	return 0;
}