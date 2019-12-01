#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int tmp;

    tmp = tab[0];
    i = 1;
    while (i < len)
    {
        if (tab[i] >= tmp)
            tmp = tab[i];
        i++;
    }
    return (tmp);
}
