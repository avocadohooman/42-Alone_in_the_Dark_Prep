/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:04:37 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/10 10:16:33 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
        write(1, &str[i++], 1);
}


char *rev_wstr(char *str)
{
    int len;
    int i;
    int pos;
    char *rev_str;

    while (str[len])
        len++;
    rev_str = malloc(sizeof(char) * len + 1);
    len--;
    i = 0;
    while (len >= 0)
    {
        while (str[len] > 32)
            len--;
        pos = len;
        len++;
        while (str[len] > 32 && str[len])
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
