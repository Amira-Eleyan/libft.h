/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:19:03 by marvin            #+#    #+#             */
/*   Updated: 2024/01/05 20:19:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    i = 0;
    while (s[i])
        i++;
    char *s1;
    s1 = (char *)malloc(i+1);
    if (*s1 == NULL)
        return (0);
    i = 0;
    while (s1[i])
    {
        s1[i] = f(i, s[i])
        i++;
    }
    s1[i] = '\0';
    return(s1);
}