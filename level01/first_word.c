/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:43:43 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 15:03:11 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{

    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] <= 32 && argv[1][i] != '\0')
            i++;
        while (argv[1][i] > 32)
        {
            ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}
