/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:08:05 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 15:17:12 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 'm' - (argv[1][i] - 'n');
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 'M' - (argv[1][i] - 'N');
            ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
        return (0);
    }
    ft_putchar('\n');
    return (0);
}
