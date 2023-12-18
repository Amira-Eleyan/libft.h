/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:58:23 by marvin            #+#    #+#             */
/*   Updated: 2023/12/16 13:58:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if(!*needle)
        return((char *)haystack);
    while(haystack[i] && i < len)
    {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
            j++;
        if(!needle[j])
            return((char *)haystack[i]);
        i++;
    }
    return(NULL);
}
int main(void)
{
    char *s1= "hello world!";
    char *s2= "world";
    size_t len = 15;

    printf("%s", ft_strnstr(s1,s2,len));
    return(0);
}