/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:02:28 by jfrances          #+#    #+#             */
/*   Updated: 2023/01/25 18:24:10 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	needle;

	needle = (char)c;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == needle)
			return ((char *) s);
		s++;
	}
	if (*s == needle)
		return ((char *) s);
	return (0);
}
