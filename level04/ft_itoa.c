/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:11:04 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/19 18:29:23 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     countdigit(int nb)
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
    long tmp;
    long len;
    char    *str;

    tmp = nbr;
    len = countdigit(nbr);
    if (nbr < 0)
    {
        len++;
        tmp *= - 1;
    }
    if (nbr == 0 || nbr == -0)
        return ("0");    
    str = malloc(sizeof(char) * len + 1);
    str[len] = '\0';
    while (tmp)
    {
        len--;
        str[len] = tmp % 10 + '0';
        tmp /= 10;
    }
    if (nbr < 0)
        str[0] = '-';
    return (str);
}


int main ()
{
    int a = -23233;
    char *str;

    str = ft_itoa(a);
    printf("%s\n", str);
    return (0);
}
