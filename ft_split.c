/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdel-m <aabdel-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:00:33 by aabdel-m          #+#    #+#             */
/*   Updated: 2024/01/25 16:20:09 by aabdel-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	array(char const *s, char c, char **arr)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end == start)
			break ;
		arr[j] = ft_substr(s, start, (end - start));
		j++;
	}
	arr[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;

	words = ft_words(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	array(s, c, arr);
	return (arr);
}
