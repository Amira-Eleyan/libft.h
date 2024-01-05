/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:07:02 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 15:07:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <shlwapi.h>

    int ft_char(char s1, char const *set)
    {
        while(*set)
        {
            if(s1 == *set)
                return(1);
            set++;
        }
        return(0);
    }
char *ft_strtrim(char const *s1, char const *set)
{
    char *s;
    size_t i;
    size_t k;
    size_t j;

    i = 0;
    k = 0;
    j = 0;

    while(s1[i])
        i++;
    while(s1[k] && ft_char(s1[k], set))
        k++;
    i--;
    while(s1[i] && ft_char(s1[i], set))
        i--;
    s = (char *)malloc(i - k +2);
    if(s == NULL)
        return(NULL);
    while(s1[k] && k <= i)
    {
        s[j] = s1[k];
        k++;
        j++;
    }
    s[j] = '\0';
    return(s);
}
int main(void)
{
    char *s1 = "hello worl hel";
    char *set = "helo ";
   //printf("%s\n", strtrim(s1, set));
    printf("%s",ft_strtrim(s1, set));
    return(0);
}