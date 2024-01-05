/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.C                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:23:24 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 11:23:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *str;

    str = (char *)malloc(len + 1);
    i = 0;
    j = 0;
    if (str == NULL)
        return (NULL);
    while (*s && i < start)
        i++;
    while (j < len && s[i] != '\0')
    {
        str[j] = s[i];
        j++;
        i++;
    }
    str[j] = '\0';
    return (str);
}