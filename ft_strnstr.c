/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavitav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:48:19 by adavitav          #+#    #+#             */
/*   Updated: 2023/01/25 16:31:51 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const char *(haystack), const char *(needle), size_t len)
{
	while (*haystack == *needle && *haystack && len--)
	{
		haystack++;
		needle++;
	}
	if (*needle == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack != '\0' && len > 0)
	{
		if (*haystack == *needle)
		{
			if (check(haystack, needle, len) == 1)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
