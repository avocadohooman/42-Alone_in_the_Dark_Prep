/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:37:14 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 10:24:27 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int min, int max)
{
    int *arr;
    int i;

    i = 0;
    if (min >= max)
    {
        arr = malloc(sizeof(int) * (min - max) + 1);
        while (min >= max)
        {
            arr[i] = min;
            min--;
            i++;
        }
    }
    else
    {
        arr = malloc(sizeof(int) * (max - min) + 1);
        while (min <= max)
        {
            arr[i] = min;
            min++;
            i++;
        }
    }
    return (arr);
}

int main()
{
    int *arr;
    int i = 0;
    int min = 0;
    int max = 0;
    
    arr = ft_range(min, max);
    while (i < 4)
    {
        printf("%d ", arr[i]);
        i++;
    }
    return (0);
}