/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:03:52 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/01/08 14:29:26 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
	}
	ptr = (char *)malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	while (j <= i)
	{
		ptr[j] = str[j];
		j++;
	}
	return (ptr);
}
