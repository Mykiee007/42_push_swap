/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:44:29 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/23 15:30:56 by mvelasqu         ###   ########.fr       */
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

int	ft_atoi(char const *c)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while (c[i] == ' ' || (c[i] > 8 && c[i] < 14))
		i++;
	if (c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (c[i] >= '0' && c[i] <= '9')
	{
		result = (result * 10) + (c[i] - '0');
		i++;
	}
	return (result * sign);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	w_count;
	size_t	in_word;
	size_t	i;

	i = 0;
	in_word = 0;
	w_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			w_count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (w_count);
}

static char	*ft_getword(char const *s, size_t start, size_t end)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = end - start;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	ft_cleardata(char **arr, size_t k)
{
	while (k > 0)
	{
		k--;
		free(arr[k]);
	}
	free(arr);
	return (0);
}

static int	ft_putword(char **arr, char const *src, char c, size_t w_index)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (src[i] != '\0' && k < w_index)
	{
		if (src[i] != c)
		{
			j = i;
			while (src[j] && src[j] != c)
				j++;
			arr[k] = ft_getword(src, i, j);
			if (arr[k] == NULL)
				return (ft_cleardata(arr, k));
			i = j;
			k++;
		}
		else
			i++;
	}
	return (1);
}

char	**ft_split(char	const *s, char c)
{
	size_t	w_index;
	char	**arr;

	if (s == NULL)
		return (NULL);
	w_index = ft_wordcount(s, c);
	arr = (char **)malloc((w_index + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	if (!ft_putword(arr, s, c, w_index))
		return (NULL);
	arr[w_index] = NULL;
	return (arr);
}

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

void	ps_doublelst_add_front(ps_list **lst, ps_list *new)
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
	tail -> next = new;
	new -> prev = tail;
	new -> next = *lst;
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

int ps_index_of_min_rot(ps_list *lst)
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

int ps_index_of_min_rev(ps_list *lst)
{
    ps_list *cur;
    int min;
    int min_index = 0;
    int index = 0;

    if (!lst)
        return (-1);

    cur = lst;
    min = lst->content;

    while (cur->prev != lst)
    {
        if (cur->content < min)
        {
            min = cur->content;
            min_index = index;
        }
        cur = cur->prev;
        index++;
    }

    if (cur->content < min)
        min_index = index;

    return (min_index);
}

int ps_index_of_min(ps_list *lst)
{
	int min_rot;
	int min_rev;
	
	if (!lst)
		return (-1);
	
	min_rot = ps_index_of_min_rot(lst);
	min_rev = ps_index_of_min_rev(lst);
	if (min_rot < min_rev)
		return (min_rot);
	else
		return (-min_rev);
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
int	ps_check_ascend (ps_list *lst)
{
	ps_list *cur;
	ps_list *next;
	int min;

	if (!lst)
		return 0;
	cur = lst;
	min = lst -> content;
	while (cur -> next != lst)
	{
		next = cur -> next;
		//printf("\nnext: %d\n", min);
		//printf("current: %d\n", cur -> next -> content);
		if (min > cur -> next -> content)
			return 0;
		cur = next;
		min = cur -> content;
	}
	return 1;
}

int ps_check_repeat (ps_list *lst)
{
	ps_list *cur;
	ps_list *index;
	int num;

	if (!lst)
		return 0;
	cur = lst;
	while (cur -> next != lst)
	{
		num = cur -> content;
		index = cur;
		while (index -> next != cur)
		{
			printf("current: %d\n", num);
			printf("next: %d\n", index -> next -> content);
			if (num == index -> next -> content)
				return 0;
			index = index -> next;
		}
		cur = cur -> next; 
	}
	return 1;
}

//int ps_check_integer (ps_list *lst)
//{
//	ps_list *cur;
//	ps_list *next;
//	
//	cur = lst;
//	while (cur -> next != lst)
//	{
//		next = cur -> next;
//		if (!ft_itoa(cur -> content))
//			return 0;
//		cur = next;
//	}
//	return 1;
//}

int ps_check_integer(char *str)
{
	if (!atoi(str))
		return 0;
	return 1;
}

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

void	process_input(char **argv, ps_list *lst)
{
	char	**in;
	int number;
	int		i;
	int		j;

	if (!argv || !lst)
		return;
	i = 1;
	while (argv[i] != NULL)
	{
		in = ft_split(argv[i],' ');
		if (!in)
			return;
		j = 0;
		while (in[j] != NULL)
		{
			if (!ps_check_integer(in[j]))
			{
				free_split(in);
				return ;
			}
			number = ft_atoi(in[j]);
			ps_doublelst_add_back(&lst, ps_doublelst_new(number));
			j++;
		}
		free_split(in);
		i++;
	}
}
	
int main(int argc, char **argv)
{
	ps_list *lst_a = NULL;

	if (argc == 1)
	{
		printf("input a valid argument");
		return (0);
	}
	//ps_list *lst_b = NULL;
	//int i = 0;
	//int number;

	//while ( i < 5 )
	//{
	//	printf("input number: ");
	//	scanf("%d", &number);
	//	ps_doublelst_add_front(&lst_a, ps_doublelst_new(number));
	//	ps_print_lst(lst_a);
	//	i++;
	//}
	process_input(argv, lst_a);
	ps_print_lst(lst_a);
	printf("distance from head to min content: %d\n", ps_index_of_min(lst_a));
	printf("assending order: %d\n", ps_check_ascend(lst_a));
	printf("repeat found: %d\n", ps_check_repeat(lst_a));
	ps_free_lst(&lst_a);
	ps_print_lst(lst_a);
	return 0;
}