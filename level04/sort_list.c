/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:20:56 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/05 17:02:02 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp_lst;
	int tmp;

	tmp_lst = lst;
	while (lst)
	{
		if (((*cmp)lst->data, lst->next->data) == 0)
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
