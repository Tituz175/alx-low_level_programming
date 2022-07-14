#include "main.h"
#include <stdio.h>

/**
 * @brief 
 * 
 * @param dest 
 * @param src 
 * @return char* 
 */


char *_strcat(char *dest, char *src)
{
        int len = 0 ,i;
        while (dest[len])
        {
                len++;
        }
        for ( i = 0; src[i] != 0; i++)
        {
                dest[len] = src[i];
                len++;
        }
        dest[len] = 0;
        return (dest);
}