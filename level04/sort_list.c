/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:20:56 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/19 19:55:23 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


#include <stdio.h>
int		ascending(int a, int b)
{
		return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmpl;
	int 	tmp;

	tmpl = lst;
	while (lst->next != NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = tmpl;
		}
		else 
			lst = lst->next;
	}
	lst = tmpl;
	return (lst);
}
/*
void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int		ascending(int a, int b)
{
		return (a <= b);
}

t_list		*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*begin;
	t_list	*p;

	begin = lst;
	while (lst)
	{
		p = lst->next;
		while (p)
		{
			if (!(*cmp)(lst->data, p->data))
			{
				swap(&lst->data, &p->data);
			}
			p = p->next;
		}
		lst = lst->next;
	}
	return (begin);
} */

#include <stdlib.h>
int		main(void)
{
	t_list *l;
	int		i;
	t_list	*t;
	t_list	*b;

	i = 50;
	l = malloc(sizeof(t_list));
	t = l;
	b = l;
	while (i)
	{
		l->data = i % 3;
		l->next = malloc(sizeof(t_list));
		l = l->next;
		--i;
	}
	l->data = (int)"fromage";
	l->next = NULL;
	while (t)
	{
		printf("%d ", t->data);
		t = t->next;
		++i;
	}
	b = sort_list(b, ascending);
	while (b)
	{
		printf("%d ", b->data);
		b = b->next;
		++i;
	}
}