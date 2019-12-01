/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:14:25 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/09 15:21:15 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int len;

    len = 0;
    while (argv[1][len] != '\0')
        len++;
    len--;
    if (argc == 2)
    {
        while(len > 0)
        {
            ft_putchar(argv[1][len]);
            len--;
        }
        ft_putchar('\n');
        return (0);
    }
    ft_putchar('\n');
    return (0);
}
