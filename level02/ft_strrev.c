/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:34:57 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 19:39:14 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    len = 0;
    while (str[len] != '\0')
        len++;
    i = 0;
    len = len - 1;
    while (*str && len > 0)
    {
        tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;
        i++;
        len--;
    }
    return (str);
}
