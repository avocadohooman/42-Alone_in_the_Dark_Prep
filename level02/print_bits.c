/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:23:19 by gmolin            #+#    #+#             */
/*   Updated: 2019/12/03 09:07:45 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_bits(unsigned char octet)
{
    unsigned int i;

    i = 256;
    while (i >>= 1)
    {
        if (octet & i)
            write (1, "1", 1);
        else 
            write (1, "0", 1);
    }
}