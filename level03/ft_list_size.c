/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:30:39 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 18:31:54 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_list_size(t_list *begin_list)
{
    int size;

    size = 0;
    while (begin_list)
    {
        begin_list = begin_list->next;
        size++;
    }
    return (size);
}