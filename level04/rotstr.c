/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:05:51 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/10 10:29:49 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // remove

void ft_pustr(char *str)
{
    int i = 0;

    while (str[i])
        write(1, &str[i++], 1);
}

char *rostring(char *str)
{
    char *rot;
    char *tmp;
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    tmp = malloc(sizeof(char) * 4096);
    while (str[i] > 32)
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
    rot = malloc(sizeof(char) * 4096);
     while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++; 
    while (str[i])
    {
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            rot[k++] = str[i++];
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            rot[k++] = str[i];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
    }
    j = 0;
    if (str[i - 1] == ' ' || str[i - 1] != '\t' || str[i - 1] != '\n')
        k--;
    if (rot[k] != ' ' || rot[k] != '\t' || rot[k] != '\n')
        rot[k++] = ' ';
    while (tmp[j])
        rot[k++] = tmp[j++];
    rot[k] = '\0';
    return (rot);
}

int main(int argc, char **argv)
{
    char *str;

    if (argc == 2)
    {
        str = rostring(argv[1]);
        ft_pustr(str);
    }
    write(1, "\n", 1);
    return (0);
}