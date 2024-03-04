/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:09:22 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/01/25 16:25:10 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	function(int n)
{
	int	i;

	i = 0;
	if (!n)
		return (-1);
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	function2(long j, char *ptr, int i)
{
	int		rest;

	while (j)
	{
		rest = j % 10;
		j = j / 10;
		ptr[i] = rest + '0';
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	long	j;
	char	*ptr;

	j = n;
	i = function(n);
	if (i < 0)
		return (ft_strdup("0"));
	ptr = (char *)malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i--] = 0;
	if (j < 0)
	{
		ptr[0] = '-';
		j = -j;
	}
	function2(j, ptr, i);
	return (ptr);
}
