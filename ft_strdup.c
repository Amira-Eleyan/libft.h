/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:11:30 by marvin            #+#    #+#             */
/*   Updated: 2023/12/18 22:11:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *str)
{
    int i;
    int j;
    char *ptr;

    i = 0;
    j = 0;

    while (str[i])
    {
        i++;
    }
    ptr = (char *)malloc(i);
    if (ptr == NULL)
        return (NULL);
    while (j <= i)
    {
        ptr[j] = str[j];
        j++;
    }
    return (ptr);
}