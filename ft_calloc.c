/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:31:17 by marvin            #+#    #+#             */
/*   Updated: 2024/01/19 20:28:15 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_blocks, size_t block_size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(num_blocks * block_size);
	if (ptr == (NULL))
		return (NULL);
	while (i < (num_blocks * block_size))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
