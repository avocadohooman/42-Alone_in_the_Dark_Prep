/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:49:47 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 11:54:12 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    int i;
    int nb;

    if (argc == 2)
    {
        nb = atoi(argv[1]);
        i = 1;
        if (nb == 1)
        {
            printf("1");
            return (0);
        }
        while (nb >= ++i)
        {
            if (nb % i == 0)
            {
                printf("%d", i);
                if (nb == i)
                    break ;
                nb /= i;
                i = 1;
                printf("*");
            }
        }
    }
    printf("\n");
    return (0);
}