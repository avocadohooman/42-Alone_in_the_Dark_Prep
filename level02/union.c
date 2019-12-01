/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:33:00 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 19:54:29 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     is_presentc(char *str, int pos, char c)
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
            if (is_presentc(argv[1], i, argv[1][i]))
                ft_putchar(argv[1][i]);
            i++;
        }
        j = 0;
        while (argv[2][j])
        {
            if (is_presentc(argv[2], j, argv[2][j]) && is_presentc(argv[1], i, argv[2][j]))
                ft_putchar(argv[2][j]);
            j++;
        }
    }
    ft_putchar('\n');
    return (0);
}