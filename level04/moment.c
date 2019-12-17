/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 17:52:18 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/17 10:48:06 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int countdigit(int nb)
{
    int i;

    i = 0;
    if (nb == 0)
        return (i + 1);
    while (nb)
    {
        nb /= 10;
        i++;
    }
    return (i);
}

char    *ft_strcat(char *s1, char *s2)
{
    char *str;
    int i;
    int j;

    str = malloc(sizeof(char)*(ft_strlen(s1) + ft_strlen(s2)) + 1);
    i = 0;
    j = 0;
    while (s1[j])
        str[i++] = s1[j++];
    j = 0;
    while (s2[j])
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}

char *ft_itoa(int nb)
{
    long tmp;
    long len;
    char *str;

    len = countdigit(nb);
    tmp = nb;
    str = malloc(sizeof(char) * len + 1);
    str[len] = '\0';
    while (tmp)
    {
        len--;
        str[len] = tmp % 10 + '0';
        tmp /= 10;
    }
    return (str);
}

char    *moment(unsigned int duration)
{
    if (duration == 0)
        return ("0 seconds ago.");
    else if (duration == 1)
        return ("1 second ago.");
    else if (duration < 60)
        return (ft_strcat(ft_itoa(duration), " seconds ago."));
    else if (duration < 120)
        return ("1 minute ago.");
    else if (duration < 3600)
        return (ft_strcat(ft_itoa(duration / 60), " minutes ago."));
    else if (duration < 7200)
        return ("1 hour ago.");
    else if (duration < 86400)
        return (ft_strcat(ft_itoa(duration / 3600), " hours ago."));
    else if (duration < 172800)
        return ("1 day ago.");
    else if (duration < 2592000)
        return (ft_strcat(ft_itoa(duration / 86400), " days ago."));
    else if (duration < 5184000)
        return ("1 month ago.");
    else
        return (ft_strcat(ft_itoa(duration / 2592000), " months ago."));
}

int main()
{
    char *str;
    
    printf("%s\n", str = moment(0));
    printf("%s\n", str = moment(1));
    printf("%s\n", str = moment(30));
    printf("%s\n", str = moment(60));
    printf("%s\n", str = moment(120));
    printf("%s\n", str = moment(2400));
    printf("%s\n", str = moment(3735));
    printf("%s\n", str = moment(85399));
    printf("%s\n", str = moment(2591000));
    printf("%s\n", str = moment(5183999));
    printf("%s\n", str = moment(5184001));
    return (0);
}
