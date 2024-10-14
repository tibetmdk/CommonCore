/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 22:30:50 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/13 23:01:28 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s; 
    while (n--) 
    {
        if (*ptr == (unsigned char)c) 
            return (void *)ptr;
        ptr++; 
    }
    return NULL;
}

int main()
{
 
    char *str = "Merhaba Benim adım tibet!";
    char *result = ft_memchr(str, 'B', strlen(str)); 
    
    if (result)
        printf("%s\n", result); 
    else
        printf("Character not found\n"); 

    return 0;
}