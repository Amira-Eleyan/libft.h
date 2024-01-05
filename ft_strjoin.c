/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:36:16 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 14:36:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *s;

    i = 0;
    j = 0;
    while (s1[i])
        i++;
    while (s2[j])
        j++;
    s = (char *)malloc(1 + i + j);
    if (s == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        s[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        s[i+j] = s2[j];
        j++;
    }
    s[i+j] = '\0';
}
