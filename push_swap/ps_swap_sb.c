#include "push_swap.h"

void    ps_swap_sb(ps_list **lst_b)
{
    ps_list *first;
    ps_list *second;
    ps_list *third;
    ps_list *tail;


    // handle list is NULL do nothing
    if (!lst_b || !(*lst_b))
        return;
    
    // handle if list has only 1 node
    first = (*lst_b);
    second = (*lst_b) -> next;
    third = second -> next;
    tail = (*lst_b) -> prev;
    if (first -> next == first)
        return;
    // if list has 2 nodes, switch head
    else if ((*lst_b) == second -> next)
        (*lst_b) = second;
    // if more than 2 nodes, 
    else
    {
        tail -> next = second;
        second -> prev = tail;
        second -> next = first;
        first -> prev = second;
        first -> next = third;
        third -> prev = first;
        (*lst_b) = second;
    }
    ft_printf("sb\n");
}
