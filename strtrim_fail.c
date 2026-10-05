/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:16:56 by fsewad            #+#    #+#             */
/*   Updated: 2026/09/29 18:17:21 by fsewad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    int i;
    int j;
    int co1;
    int flag1;
    int  co2; 
    int flag2;
    int len;

    i = 0;
    co1 = 0;
    co2 = 0;
    len = ft_strlen((char *)s1);
    while (s1[i] != '\0')
    {
        j = 0;
        flag1 = 0; 
        while (set[j] != '\0')
        {
            if (s1[i] == set[j])
            { 
                flag1++; 
                co1++;
            } 
            j++;
        }
        if (flag1 == 0)
            break;
        i++;
    }
    int s;
    s = ft_strlen((char *)set); 
    while (len >= 0)
    {
        j = 0;
        flag2 = 0;
        while (j < s)
        {
            if (s1[len-1] == set[j])
            { 
                flag2++; 
                co2++; 
            } 
            j++;
        } 
        if (flag2 == 0)
            break;
        len--;
    }
    len = ft_strlen((char *)s1);
    len = (len + 1 - co1) - co2;
    ptr = malloc (len * 1);
    ft_strlcpy(ptr,(char *)&s1[co1], len);
    return (ptr);
}

int main()
{
    char src[] = "121516151221";
    char set[] = "12";
    printf("\n%s\n",ft_strtrim(src,set));
}