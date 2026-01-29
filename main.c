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

void	process_input(char **input_list, ps_list **lst)
{
	int	i;
	int	number;

	while (input_list[i] != NULL)
	{
		number = ft_atoi(input_list[i]);
		ft_printf("%d\n", number);
		ps_doublelst_add_front(lst,ps_doublelst_new(number));
		i++;
	}
}
	
int main(int argc, char **argv)
{
	ps_list **lst_a = NULL;
	char	**split;
	char	*str1;
	char	d;
	int 	i;

	d = ' ';
	if (argc == 1)
	{
		ft_printf("input a valid argument");
		return (0);
	}
	str1 = ps_input_to_str(argv);
	ft_printf("combined argv:%s\n", str1);
	split = ft_split(str1, d);
	if (!split)
		return 0;
	i = 0;
	while (split[i] != NULL)
	{
		ft_printf("split:%s\n", split[i]);
		i++;
	}
	ft_printf("here\n");
	if (!ps_check_integer(split))
	{
		ft_printf("input an integer");
		return 0;
	}
	ft_printf("here 2\n");
	process_input(split,lst_a);
	ft_printf("here 3\n");

	//process_input(argv, &lst_a);
	ft_printf("here 4\n");
	ps_print_lst(*lst_a);
	ft_printf("here 5\n");
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
	ps_free_lst(lst_a);
	return 0;
}