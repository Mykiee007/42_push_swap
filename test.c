/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:44:29 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/22 15:49:50 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct l_list
{
	int				content;
	struct l_list	*next;
	struct l_list	*prev;
}	ps_list;

ps_list	*ps_doublelst_new(int content)
{
	ps_list	*node = (ps_list *)malloc(sizeof(ps_list));
	
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	node -> prev = NULL;
	return (node);
}

void	ps_doublelst_add_back(ps_list **lst, ps_list *new)
{
	ps_list *tail;
	
	if (!lst || !new)
		return;
	if (*lst == NULL)
	{
		new -> next = new;
		new -> prev = new;
		*lst = new;
		return;
	}
	tail = (*lst) -> prev;
	new -> next = *lst;
	new -> prev = tail;
	tail -> next = new;
	(*lst) -> prev = new;
}

void ps_print_lst(ps_list *lst)
{
	ps_list *list;

	if (!lst)
	{
		printf("empty list\n");
		return;
	}

	list = lst;
	while (list -> next != lst)
	{
		printf("%d", list -> content);
		if (list -> next != lst)
			printf(" ");
		list = list -> next;
	}
	printf("%d\n", list -> content);
}

int ps_index_of_min(ps_list *lst)
{
    ps_list *cur;
    int min;
    int min_index = 0;
    int index = 0;

    if (!lst)
        return (-1);

    cur = lst;
    min = lst->content;

    while (cur->next != lst)
    {
        if (cur->content < min)
        {
            min = cur->content;
            min_index = index;
        }
        cur = cur->next;
        index++;
    }

    if (cur->content < min)
        min_index = index;

    return (min_index);
}

void ps_free_lst(ps_list **lst)
{
    ps_list *cur;
    ps_list *next;

    if (!lst || !*lst)
        return;

    cur = (*lst)->next;
    while (cur != *lst)
    {
        next = cur->next;
        free(cur);
        cur = next;
    }
    free(*lst);
    *lst = NULL;
}

int main(void)
{
	ps_list *lst = NULL;
	int i = 0;
	int number;

	while ( i < 10 )
	{
		printf("input number: ");
		scanf("%d", &number);
		ps_doublelst_add_back(&lst, ps_doublelst_new(number));
		ps_print_lst(lst);
		i++;
	}
	printf("distance from head to min content: %d\n", ps_index_of_min(lst));
	ps_free_lst(&lst);
	ps_print_lst(lst);
	return 0;
}