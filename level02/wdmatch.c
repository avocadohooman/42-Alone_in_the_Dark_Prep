/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:44:19 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 20:01:51 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int len;
    
    if (argc == 3)
    {
        len = 0;
        while (argv[1][len])
            len++;
        i = 0;
        j = 0;
        while (argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (argv[1][i] == '\0')
        {
            write(1, argv[1], len);
            write(1, "\n", 1);
            return (0);
        }
    }
    write(1, "\n", 1);
    return(0);
}
