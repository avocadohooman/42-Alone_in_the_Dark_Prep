/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:59:34 by gmolin            #+#    #+#             */
/*   Updated: 2020/01/19 18:03:01 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "brainfuck.h"


char	*bracket(char *str, int way)
{
	int i;

	i = 0;
	while (1)
	{
		if (*str == '[')
			i++;
		if (*str == ']')
			i--;
		if (i == 0)
			return (str);
		str = str + way;
	}
	return (NULL);
}

void	brainfuck(char *str)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 4096);
	while (*str != '\0')
	{
		if (*str == '>')
			ptr++;
		if (*str == '<')
			ptr--;
		if (*str == '+')
			*ptr = *ptr + 1;	
		if (*str == '-')
			*ptr = *ptr - 1;	
		if (*str == '[' && *ptr == 0)
			str = bracket(str, 1);
		if (*str == ']' && *ptr != 0)
			str = bracket(str, -1);
		if (*str == '.')
			write (1, &*ptr, 1);
		str++;	
	}
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        brainfuck(argv[1]);
		return (0);
    }
	write(1, "\n", 1);
    return (0);
}
