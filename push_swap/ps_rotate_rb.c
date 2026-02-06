/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:50:51 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/04 11:22:56 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ps_rotate_rb(ps_list **lst_b)
{
    (*lst_b) = (*lst_b) -> prev;
    ft_printf("rb\n");
}