/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:41:01 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 18:02:14 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_atoi(char *str)
{
    int sign;
    int i;
    int res;

    sign = 1;
    res = 0;
    i = 0;
    while (str[i] < 33)
        i++;
    if (str[i] == '-')
        sign *= -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

void  ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long i;

    i = nb;
    if (i < 0)
    {
        write (1, "-", 1);
        i *= -1;
    }
    if (i >=0 && i <= 9)
        ft_putchar(i + 48);
    else if (i > 9)
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
}

int is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= (nb / 2))
    {
        if (!(nb % i))
            return (0);
        else 
            i++;
    }
    return (1);
}


int main(int argc, char **argv)
{
    int nb;
    int sum;

    if (argc == 2)
    {
        nb = ft_atoi(argv[1]);
        sum = 0;
        while (nb > 0)
            if (is_prime(nb--))
                sum += nb + 1;
        ft_putnbr(sum);
    }
    ft_putchar('\n');
    return (0);
}
