/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:42:44 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/01/25 16:03:08 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char *str;
// 	str = "hoooala";
// 	printf ("%lu\n",strlen(str));
// 	printf("%d", ft_strlen(str));
// 	return (0);
// }
