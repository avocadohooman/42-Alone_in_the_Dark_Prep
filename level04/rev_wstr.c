/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:04:37 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/05 17:48:25 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *rev_wstr(char *str)
{
    char *rev_str;
    int len;
    int i;
    int pos;

    i = 0;
    len = 0;
    while (str[len])
        len++;
    rev_str = malloc(sizeof(char) * len + 1);
    len--;
    while (len > 0)
    {
        while (str[len] > 32)
            len--;
        pos = len;
        len++;
        while (str[len] > 32)
            rev_str[i++] = str[len++];
        len = pos;
        if (str[len] == ' ' || str[len] == '\t' || str[len] == '\n')
            rev_str[i++] = str[len];
        len--;
    }
    rev_str[i] = '\0';
    return (rev_str);
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
