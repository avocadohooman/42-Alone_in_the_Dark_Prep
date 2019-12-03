/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:31:53 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 11:35:57 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    if (!begin_list || !f)
        return ;
    while (begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}