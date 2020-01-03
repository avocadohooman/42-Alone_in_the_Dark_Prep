/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 16:26:03 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/03 10:33:22 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
	int i;
	int k;
	int j;
	char **split;

	i = 0;
	k = 0;
	split = (char**)malloc(sizeof(char*) * 256);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
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
    char *str = "    HELLO HELLO L L L L L L L L L L L L   !!dsad 213 sad asd  49i0 9uidsjo ;lkfas ;s L L   L ";
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