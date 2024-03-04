/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:07:02 by marvin            #+#    #+#             */
/*   Updated: 2024/01/25 16:21:18 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_char(char s1, char const *set)
{
	while (*set)
	{
		if (s1 == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_counter(char const *s1, char const *set)
{
	size_t	k;

	k = 0;
	while (s1[k] && ft_char(s1[k], set))
		k++;
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	k;
	size_t	j;

	k = ft_counter(s1, set);
	j = 0;
	i = ft_strlen((char *)s1);
	if (k == i)
		return (ft_strdup(""));
	i--;
	while (s1[i] && ft_char(s1[i], set))
		i--;
	s = (char *)malloc(i - k + 2);
	if (s == NULL)
		return (NULL);
	while (s1[k] && k <= i)
	{
		s[j] = s1[k];
		k++;
		j++;
	}
	s[j] = '\0';
	return (s);
}
/* int main(void)
{
	char *s1 = "hello worlr hel";
	char *set = "helo ";
	//printf("%s\n", strtrim(s1, set));
	printf("%s",ft_strtrim(s1, set));
	return(0);
}*/