/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paramsum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:05:26 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 10:48:30 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    long i;

    i = nb;
    if (i < 0)
    {
        i = i * -1;
        ft_putchar('-');
    }
    if (i >=0 && i <= 9)
    {
        ft_putchar(i + 48);
    }
    if (i > 9)
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        ft_putnbr(argc - 1);
        ft_putchar('\n');
        argv[1] = argv[1];
        return (0);
    }
    ft_putchar('0');
    ft_putchar('\n');
    return (0);
}
