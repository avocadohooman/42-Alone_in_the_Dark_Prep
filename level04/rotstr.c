/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:05:51 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/05 18:13:15 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void   ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *rostring(char *str)
{
    int i;
    int j;
    int k;
    char *tmp;
    char *rev;

    i = 0;
    j = 0;
    k = 0;
    tmp = malloc(sizeof(char) * 4096);
    rev = malloc(sizeof(char) * 4096);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i] > 32 && str[i])
        tmp[j++] = str[i++];
    tmp[j] = '\0';
    while (str[i])
    {
        if (str[i] > 32)
            break ;
        i++;
    }
    if (str[i] == '\0')
        return (tmp);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
    while (str[i])
    {
        while (str[i] > 32 && str[i])
            rev[k++] = str[i++];
        if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
            rev[k++] = str[i];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
    }
    if (str[i - 1] > 32)
        rev[k++] = ' ';
    j = 0;
    while (tmp[j])
        rev[k++] = tmp[j++];
    rev[k] = '\0';
    return (rev);

}

int main(int argc, char **argv)
{
    char *str;

    if (argc == 2)
    {
        str = rostring(argv[1]);
        ft_putstr(str);
    }
    write(1, "\n", 1);
    return (0);
}