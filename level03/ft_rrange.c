#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int min, int max)
{
    int i;
    int *arr;

    i = 0;
    if (min >= max)
    {
        arr = malloc(sizeof(int) * (min - max) + 1);
        i = (min - max);
        while (max <= min)
        {
            arr[i] = min;
            min--;
            i--;
        }
    }
    else
    {
        arr = malloc(sizeof(int) * (max - min) + 1);
        i = (max - min);
        while (min <= max)
        {
            arr[i] = min;
            min++;
            i--;
        }
    }
    return (arr);
}

int main()
{
    int *arr;
    int i = 0;
    int min = 0;
    int max = -3;
    
    arr = ft_rrange(min, max);
    while (i < 4)
    {
        printf("%d ", arr[i]);
        i++;
    }
    return (0);
}
