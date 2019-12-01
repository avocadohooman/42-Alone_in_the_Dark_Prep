/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:10:06 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 17:15:01 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char ** argv)
{
    int i;
    int j;
    int len;

    if (argc == 3)
    {
        i = 0;
        len = 0;
        j = 0;
        while (argv[1][len])
            len++;
        while (argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (argv[1][i] == '\0')
        {
            write(1, "1", 1);
            write (1, "\n", 1);
            return (0);
        }
        write(1, "0", 1);
    }
    write (1, "\n", 1);
    return (0);
}