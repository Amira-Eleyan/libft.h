/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:03:50 by marvin            #+#    #+#             */
/*   Updated: 2023/12/22 18:03:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;

    i = 0;
    while(s[i])
    {
        i++;
    }
    char *s1;
    s1 = malloc(i+1);
    if (*s1 == NULL)
        return (NULL);
    i =0;
    while(s[i])
    {
        s1[i] = f(i, s[i]);
        i++;
    }
    s1[i] = '\0';
    return(s1);
}