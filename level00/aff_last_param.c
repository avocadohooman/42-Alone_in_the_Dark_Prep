/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:23:37 by gmolin            #+#    #+#             */
/*   Updated: 2019/11/09 15:34:24 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{
    int len;
    int i;

    len = 0;
    i = 0;
    while (argv[len] != '\0')
        len++;
    len--;
    if (argc > 1)
    {
        while (argv[len][i] != '\0')
        {
            ft_putchar(argv[len][i]);
            i++;
        }
        ft_putchar('\n');
        return (0);
    }
    ft_putchar('\n');
    return (0);
}
