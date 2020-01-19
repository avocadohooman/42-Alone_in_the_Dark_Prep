/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 15:33:51 by lsauvage          #+#    #+#             */
/*   Updated: 2020/01/14 09:43:43 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define abs(v) (v) < 0 ? -(v) : (v) // abs function to calculate the Absolute value

void ib(int n, int b, char *res, int *p)
{
	char *str = "0123456789ABCDEF";

	if (n >= b || n <= -b) // recursive call for the function
		ib(n /b, b, res, p);
	res[(*p)++] = str[abs(n % b)]; 
}


char *ft_itoa_base(int value, int base)
{
	int p = 0;
	char *res;

	if (((base < 2 || base > 16) || !(res = (char *)malloc(sizeof(char) * 35)))) // maximum length needed in the condition --> waste of memory
		return NULL;
	if (value < 0 && base == 10)
		res[p++] = '-';
	ib(value, base, res, &p);
	res[p] = '\0';
	return (res);
}

int main(int ac, const char **av)
{
	if (ac == 3)
	{
		printf("taille de value : %zu\n", digit_count(atoi(av[1]), atoi(av[2])));
		printf("itoa : %s\n", ft_itoa_base(atoi(av[1]), atoi(av[2])));
	}
	return (0);
}