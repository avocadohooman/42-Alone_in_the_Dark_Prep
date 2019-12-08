/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:20:56 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/08 19:27:07 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int     tmp1;
    t_list *tmp2;

    tmp2 = lst;
    while (lst->next)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            tmp1 = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp1;
            lst = tmp2;
        }
        else 
            lst = lst->next;
    }
    lst = tmp2;
    return (lst);
}
