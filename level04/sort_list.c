/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:20:56 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/17 10:36:47 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int tmp;
    t_list *tmp_lst;

    tmp_lst = lst;

    while (lst)
    {
        if (((*cmp)(lst->data, lst->next->data) == 0))
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = tmp_lst;
        }
        else 
            lst = lst->next;
    }
    lst = tmp_lst;
    return (lst);
}
