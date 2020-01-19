/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:49:47 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/19 18:15:56 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int nb;
	int i;

	if (argv[1][0] == '1' && argv[1][1] == '\0')
	{
		printf("1\n");
		return (0);
	}
	if (argc == 2)
	{
		i = 1;
		nb = atoi(argv[1]);
		while (nb >= ++i)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb == i)
					break ;
				printf("*");
				nb /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
