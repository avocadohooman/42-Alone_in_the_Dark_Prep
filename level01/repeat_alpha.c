/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:31:24 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 15:07:24 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int main(int argc, char **argv)
{
    int a;
    int i;
    
    a = 0;
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                a = argv[1][i] - 97;
                while (a >= 0)
                {
                    ft_putchar(argv[1][i]);
                    a--;
                }
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                a = argv[1][i] - 65;
                while (a >= 0)
                {
                    ft_putchar(argv[1][i]);
                    a--;
                }
            }
            i++;
        }
        ft_putchar('\n');
        return(0);
    }
    ft_putchar('\n');
    return(0);
}
