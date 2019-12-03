/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:11:04 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 11:31:19 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     countdigit(int nbr)
{
    int i;

    i = 0;
    if (nbr == 0)
        i++;
    while (nbr)
    {
        nbr = nbr / 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int nbr)
{
    char *str;
   // int i;
    int len;
    int tmp;

    //i = 0;
    len = countdigit(nbr);
    tmp = nbr;
    if (nbr < 0)
    {
        tmp *= -1;
        len++;
    }
    str = malloc(sizeof(char) * (len) + 1);
    if (nbr == 0)
    {   
        str[len] = '\0';
        str[0] = '0';
        return (str);
    }
    if (nbr < 0)
        str[0] = '-';
    str[len] = '\0';
    len--;
    while (tmp)
    {
        str[len] = (tmp % 10) + '0';
        tmp = tmp / 10;
        len--;
    }
    return (str);
}

int main ()
{
    int a = -978532711;
    char *str;

    str = ft_itoa(a);
    printf("%s\n", str);
    return (0);
}