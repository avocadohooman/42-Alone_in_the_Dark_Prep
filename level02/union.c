/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:33:00 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 09:31:14 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    is_present_c(char *str, int pos, char c)
{
    int k;

    k = 0;
    while (k < pos)
    {
        if (str[k] == c)
            return (0);
        k++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        while (argv[1][i])
        {
            if (is_present_c(argv[1], i, argv[1][i]))
                write(1, &argv[1][i], 1);
            i++;
        }
        j = 0;
        while (argv[2][j])
        {
            if (is_present_c(argv[2], j, argv[2][j]) && is_present_c(argv[1], i, argv[2][j]))
                write(1, &argv[2][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
