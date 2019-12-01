/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:49:42 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/10 16:05:09 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int main(int argc, char **argv)
{
    int len  = 0;

    while (argv[1][len])
        len++;
    if (argc == 2)
    {
        while (argv[1][len] < 33)
            len--;
        if (len <= 0)
        {
            ft_putchar('\n');
            return (0);
        }
        while (argv[1][len] > 32)
            len--;
        if (argv[1][len] > 32)
        {
            ft_putchar('\n');
            return (0);
        }
        len++;
        while (argv[1][len] > 32)
        {
            ft_putchar(argv[1][len]);
            len++;
        }
        ft_putchar('\n');
        return (0);
    }
    ft_putchar('\n');
    return (0);
}