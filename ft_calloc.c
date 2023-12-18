/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:31:17 by marvin            #+#    #+#             */
/*   Updated: 2023/12/18 15:31:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(size_t num_blocks, size_t block_size)
{
    char *ptr;
    size_t i;

    i = 0;
    ptr = (char *)malloc(num_blocks * block_size);
    if (ptr == (NULL))
        return (NULL);

    while (i < num_blocks)
    {
        ptr[i] = 0;
        i++;
    }
    return ((void *)ptr);
}
