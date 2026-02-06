/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:10:45 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/04 16:30:48 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

	
int main(int argc, char **argv)
{
	ps_list *lst_a = NULL;
	ps_list *lst_b = NULL;
	char	**split;
	char	*str1;

	if (argc == 1)
	{
		ft_printf("input a valid argument");
		return (0);
	}
	str1 = ps_input_to_str(argv);
	split = ft_split(str1, ' ');
	free(str1);
	if (!ps_check_integer(split))
	{
		ft_free_split (split);
		ft_printf("input an integer\n");
		return 0;
	}
	ft_str_to_lst(split,&lst_a);
	ft_free_split(split);
	ps_print_lst(&lst_a);
	// test section for sorting operations
	ps_push_pb(&lst_b,&lst_a);
	ps_print_lst(&lst_a);
	ps_print_lst(&lst_b);
	ps_push_pb(&lst_b,&lst_a);
	ps_print_lst(&lst_a);
	ps_print_lst(&lst_b);
	ps_push_pb(&lst_b,&lst_a);
	ps_print_lst(&lst_a);
	ps_print_lst(&lst_b);
	// end of test section
	ft_printf("distance from head to min content: %d\n", ps_index_of_min(lst_a));
	if (ps_check_ascend(lst_a))
		ft_printf("Ascending: Yes\n");
	else
		ft_printf("Ascending: No\n");
	if (ps_check_repeat(lst_a))
		ft_printf("repeat: No\n");
	else
		ft_printf("repeat: Yes\n");
	
	ps_doublelst_clear(&lst_a);
	ps_doublelst_clear(&lst_b);
	return 0;
}