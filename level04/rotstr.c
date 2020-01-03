/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:05:51 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/17 13:36:13 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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
    int pos;
    char *rstr;
    char *tmp;

    tmp = malloc(sizeof(char) * 4096);
    i = 0;
    j = 0;
    k = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
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
    rstr = malloc(sizeof(char) * 4096);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
    while(str[i])
    {
        while (str[i] > 32)
            rstr[k++] = str[i++];
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            rstr[k++] = str[i];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
    }
    if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
            k--;
    if (rstr[k] != ' ' || rstr[i] != '\t' || rstr[i] != '\n')
        rstr[k++] = ' ';
    j = 0;
    while (tmp[j])
        rstr[k++] = tmp[j++];
    rstr[k] = '\0';
    return (rstr);
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