/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 20:32:21 by exam              #+#    #+#             */
/*   Updated: 2019/12/03 09:07:43 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;

    i = 256;
    while (i >>= 1)
    {
        if (octet & i)
            write (1, "1", 1);
        else
            write(1, "0", 1); 
    }
}