/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:23:19 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/01 19:40:26 by gmolin           ###   ########.fr       */
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