/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 10:51:57 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 11:10:43 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;

    i = 1000000;
    if (argc == 3)
    {
        while (i > 0)
        {
            if (atoi(argv[1]) % i == 0 && atoi(argv[2]) % i == 0)
            {
                printf("%d\n", i);
                return (0);
            }
            i--;
        }
    }
    return (0);
}
