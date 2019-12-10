/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 16:19:39 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/10 12:11:22 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;
    t_list *i;

    while(*begin_list && !cmp((*begin_list)->data, data_ref))
    {
        tmp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(tmp);
    }
    i = *begin_list;
    while (i && i->next)
    {
        if (!cmp(i->next->data, data_ref))
        {
            tmp = i->next;
            i->next = tmp->next;
            free(tmp);
        }
        if (i->next)
            i = i->next;
    }
}