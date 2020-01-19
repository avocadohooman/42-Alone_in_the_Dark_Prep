/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:04:37 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/19 19:10:45 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char    *rev_wstr(char *str)
{
    char *rev;
    int i;
    int k;
    int pos;

    i = 0;
    k = 0;
    while (str[i])
        i++;
    rev = malloc(sizeof(char) * i + 1);
    i--;
    while (i > 0)
    {
        while (str[i] > 32)
            i--;
        pos = i;
        i++;
        while (str[i] > 32)
            rev[k++] = str[i++];
        i = pos;
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            rev[k++] = str[i];
        i--;
    }
    rev[k] = '\0';
    return (rev);
}

int main(int argc, char **argv)
{
    char *str;

    if (argc == 2)
    {
        str = rev_wstr(argv[1]);
        ft_putstr(str);
    }
    write(1, "\n", 1);
    return (0);
}
