/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:02:05 by aabdel-m          #+#    #+#             */
/*   Updated: 2023/12/12 14:13:22 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

#include "libft.h"

// si	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (*str)
// 	{
// 		str++;
// 		i++;
// 	}
// 	return (i);
// }

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	int		i;
	size_t	j;
	size_t	k;

	j = ft_strlen(dest);
	k = j;
	if (size <= j)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && j < (size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (k + ft_strlen(src));
}

// int	main(void)
// {
// 	char src[] = "world!!!!";
// 	char dest[20] = "r";
// 	unsigned int	size;

// 	size = 2;
// 	printf("%lu\n", strlcat("pqrstuvwxyz", "abcd", 3));
// 	//printf("%zu\n", ft_strlcat(dest, src, size));
// 	printf("%s\n", dest);

// 	return (0);
// }
