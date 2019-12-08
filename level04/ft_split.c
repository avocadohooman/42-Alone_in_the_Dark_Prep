/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 16:26:03 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/08 17:03:50 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char **split;

    if (!(split = (char**)malloc(sizeof(char*) * 256)))
        return (NULL);
    i = 0;
    k = 0;
    while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
            i++;
    while(str[i])
    {
        j = 0;
        if (!(split[k] = (char*)malloc(sizeof(char) * 4096)))
            return (NULL);
        while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
            split[k][j++] = str[i++];
        while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
            i++;
        split[k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return (split);
}
