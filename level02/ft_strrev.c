/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:34:57 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 08:53:03 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    i = 0;
    while (str[len])
        len;
    len = len - 1;
    while (str[i])
    {
        tmp = str[len];
        str[len] = str[i];
        str[i] = tmp;
        len--;
        i++;
    }
    return (str);
}
