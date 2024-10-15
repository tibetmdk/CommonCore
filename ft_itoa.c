/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:03:21 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/15 17:25:12 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_length(int n)
{
    int len = 1;
    if (n > 0)
        len = 0;
    while (n != 0)
    {
        len++;
        n /= 10; //0.6
    }
    return len;
}

char *ft_itoa(int n)
{
    int len = get_length(n);
    char *str = (char *)malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
   /* if (n == -2147483648)
        return ("-2147483648");  */
    
    str[len] = '\0';
    int is_negative = 0;
    if (n < 0)
    {
        is_negative = 1;
        n = -n;
    }
    while (len > 0)
    {
        len--;
        str[len] = (n % 10) + '0';
        n /= 10;
        if (len == 0 && is_negative)
            str[len] = '-';
    }
    return str;
}

#include <stdio.h>
int main()
{
    printf("%s", ft_itoa(-2147483647));
}