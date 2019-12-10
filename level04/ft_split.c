/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 16:26:03 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/10 09:32:12 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
    char **split;
    int k;
    int i;
    int j;

    split = (char**)malloc(sizeof(char*)*256);
    i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    k = 0;
    while (str[i])
    {
        j = 0;
        split[k] = (char*)malloc(sizeof(char) * 4096);
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            split[k][j++] = str[i++];
        split[k][j] = '\0';
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        k++;
    }
    split[k] = NULL;
    return (split);
}

int main()
{
    char *str = "    HELLO HELLO L L L L L L L L L L L L    L L   L ";
    char **split;
    int i = 0;
    int k;
    
    split = ft_split(str);
    while (split[i])
    {
        printf("%s\n", split[i]);
        i++;
    }
    return (0);
}