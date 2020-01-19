/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/03 12:47:56 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/19 18:23:24 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
# define abs(v) (v) < 0 ? -(v) : (v)

void	ib (int n, int b, char *res, int *p)
{
	char *str = "0123456789ABCDEF";

	if (n >= b || n <= -b)
		ib(n/b, b, res, p);
	res[(*p)++] = str[abs(n % b)];
}

char	*ft_itoa_base(int value, int base)
{
	char 	*res;
	int		p = 0;

	if (base < 2 || base > 16 || !(res = malloc(sizeof(char) * 35)))
		return NULL;
	if (base == 10 && value < 0)
		res[p++] = '-';
	ib (value, base, res, &p);
	res[p] = '\0';
	return (res);
}

int main(int ac, const char **av)
{
	if (ac == 3)
	{
		printf("itoa : %s\n", ft_itoa_base(atoi(av[1]), atoi(av[2])));
	}
	return (0);
}
