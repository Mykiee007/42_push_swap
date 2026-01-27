/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:10:45 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/27 15:42:10 by mvelasqu         ###   ########.fr       */
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

void	process_input(char **argv, ps_list **lst)
{
	char	**in;
	int number;
	int		i;
	int		j;

	ft_printf("im in\n");
	if (!argv || !lst)
		return;
	i = 1;
	ft_printf("i was here\n");
	while (argv[i] != NULL)
	{
		ft_printf("i was here 2\n");
		in = ft_split(argv[i],' ');
		if (!in)
			return;
		ft_printf("i was here 3\n");
		j = 0;
		while (in[j] != NULL)
		{
			ft_printf("i was here 4\n");
			if (!ps_check_integer(in[j]))
			{
				free_split(in);
				return ;
			}
			number = ft_atoi(in[j]);
			ft_printf("i was here 5 : %d\n", number);
			ps_doublelst_add_back(lst, ps_doublelst_new(number));
			ps_print_lst(*lst);
			ft_printf("i was here 6\n");
			j++;
		}
		ft_printf("i was here 7\n");
		free_split(in);
		ft_printf("i was here 8\n");
		ps_print_lst(*lst);
		i++;
	}
	ft_printf("i was here last\n");
	ps_print_lst(*lst);
}
	
int main(int argc, char **argv)
{
	ps_list *lst_a = NULL;

	if (argc == 1)
	{
		ft_printf("input a valid argument");
		return (0);
	}
	ft_printf("hello\n");
	//ps_list *lst_b = NULL;
	//int i = 0;
	//int number;

	//while ( i < 5 )
	//{
	//	ft_printf("input number: ");
	//	scanf("%d", &number);
	//	ps_doublelst_add_front(&lst_a, ps_doublelst_new(number));
	//	ps_print_lst(lst_a);
	//	i++;
	//}
	process_input(argv, &lst_a);
	ps_print_lst(lst_a);
	ft_printf("distance from head to min content: %d\n", ps_index_of_min(lst_a));
	ft_printf("assending order: %d\n", ps_check_ascend(lst_a));
	ft_printf("repeat found: %d\n", ps_check_repeat(lst_a));
	ps_free_lst(&lst_a);
	return 0;
}