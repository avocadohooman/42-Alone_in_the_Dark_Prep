/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:39:51 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/19 19:55:28 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
int main()
{
	int tab[6] = {1, 4, 2, 3, 5, 89};
	int i = 0;

	sort_int_tab(tab, 7);
	while (i < 6)
	{
		printf("%i, ", tab[i]);
		i++;
	}
	return (0);
}
