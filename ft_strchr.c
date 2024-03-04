/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:17:20 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/01/10 13:19:56 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (0);
}

// int	main(void)
// {
// 	char c;
// 	char	*str;

// 	str = "holaa";
// 	c = 'a';
// 	printf ("%s\n", strchr (str,c));
// 	printf ("%s", ft_strchr(str, c));
// 	return (0);
// }
