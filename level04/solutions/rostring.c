/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:06:43 by jaleman           #+#    #+#             */
/*   Updated: 2019/12/10 10:18:28 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_pustr(char *str)
{
    int i = 0;

    while (str[i])
        write(1, &str[i++], 1);
}

char *rostring(char *str)
{
    char *new;
    char *tmp;
    int i = 0;
    int j = 0;
    int k = 0;
    int len = 0;

    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    tmp = malloc(sizeof(char) * 4096);
    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
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
    new = malloc(sizeof(char) * 4096);
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;;
    while (str[i])
    {
        while (str[i] > 32 && str[i])
            new[k++] = str[i++];
        if (str[i]  == ' ' || str[i] == '\t' || str[i] == '\n')
            new[k++] = str[i];
        while (str[i]  == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
    }
    j = 0;
    if (new[k - 1] == ' ' || new[k - 1] == '\t' || new[k - 1] == '\n')
        k--;
    if (new[k] != ' ' || new[k] != '\t' || new[k] != '\n')
        new[k++] = ' ';
    while (tmp[j])
        new[k++] = tmp[j++];
    new[k] = '\0';
    return (new);
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