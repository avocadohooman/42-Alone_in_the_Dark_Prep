/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:11:04 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/08 16:04:35 by gmolin           ###   ########.fr       */
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

char	*ft_itoa(int nbr)
{
    char *str;
    int len;
    long tmp;

    len = countdigit(nbr);
    tmp = nbr;
    if (nbr < 0)
        len++;
    str = malloc(sizeof(char) * len + 1);
    if (nbr < 0)
    {
        tmp *= -1;
        str[0] = '-';
    }
    str[len] = '\0';
    len--;
    while (tmp)
    {
        str[len] = tmp % 10 + '0';
        tmp /= 10;
        len--;
    }
    return (str);
}

int main ()
{
    int a = 2147483647;
    char *str;

    str = ft_itoa(a);
    printf("%s\n", str);
    return (0);
}
