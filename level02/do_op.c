/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:17:47 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/10 15:27:48 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int res;

    i = 0;
    res = 0;
    if (argc == 4)
    {
        if (argv[2][0] == '*')
            res = atoi(argv[1]) * atoi(argv[3]);   
        if (argv[2][0] == '-')
            res = atoi(argv[1]) - atoi(argv[3]);
        if (argv[2][0] == '+')
            res = atoi(argv[1]) + atoi(argv[3]);
        if (argv[2][0] == '/')
            res = atoi(argv[1]) / atoi(argv[3]);    
        printf("%d\n", res);
        return (0);
    }
    printf("\n");
    return (0);
}
