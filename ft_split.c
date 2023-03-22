/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:37:19 by jfrances          #+#    #+#             */
/*   Updated: 2023/01/27 17:13:34 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dealloc(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int	count_words(const char *s, char st)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	if (st == 0)
		return (1);
	while (s[i] != '\0')
	{
		if ((s[i + 1] == st) && !(s[i] == st || s[i] == '\0'))
			words++;
		if ((s[i + 1] == '\0') && !(s[i] == st || s[i] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, const char *from, char charset)
{
	int	i;

	i = 0;
	while ((from[i] == charset || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset || str[i] == '\0')
			i++;
		else
		{
			j = 0;
			while (!(str[i + j] == charset || str[i + j] == '\0'))
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return (dealloc (split, word - 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	if (ft_strlen(str) == 0 || (!str && c == 0))
	{
		res = (char **)malloc(sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	else
		words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == -1)
		return (NULL);
	return (res);
}
