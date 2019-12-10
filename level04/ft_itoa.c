/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:11:04 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/10 09:04:36 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int countdigit(int nb)
{
    int i;

    i = 0;
    if (nb == 0)
        return (i + 1);
    while (nb)
    {
        nb /= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int nbr)
{
    long tmp;
    int len;
    char *str;

    len = countdigit(nbr);
    tmp = nbr;
    if (nbr == 0)
        return ("0");
    if (tmp < 0)
    {
        tmp *= -1;
        len++;
    }
    str = malloc(sizeof(char) * len + 1);
    str[len] = '\0';
    if (nbr < 0)
        str[0] = '-';
    while (tmp)
    {
        len--;
        str[len] = tmp % 10 + '0';
        tmp /= 10;
    }
    return (str);
}
int main ()
{
    int a = 13165465;
    char *str;

    str = ft_itoa(a);
    printf("%s\n", str);
    return (0);
}
