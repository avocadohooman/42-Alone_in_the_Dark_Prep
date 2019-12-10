/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:20:56 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/10 14:56:09 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int     tmp;
    t_list *tmp_list;

    tmp_list = lst;
    while (lst)
    {
        if (((*cmp)(lst->data, lst->next->data) == 0))
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = tmp_list;
        }
        else 
            lst = lst->next;
    }
    lst = tmp_list;
    return (lst);
}