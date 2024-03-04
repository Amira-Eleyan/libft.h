/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:41:10 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/01/12 20:19:51 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((ptr1[i] != '\0' && ptr2[i] != '\0') && i < n)
	{
		if (ptr1[i] != ptr2[i] || i == (n - 1))
			break ;
		i++;
	}
	return (ptr1[i] - ptr2[i]);
}

// int	main(void)
// {
// 	printf("%d", strncmp("hola", "hora", 2));
// 	return (0);
// }
