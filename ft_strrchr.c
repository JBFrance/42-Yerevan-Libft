/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:38:41 by jfrances          #+#    #+#             */
/*   Updated: 2023/01/27 17:14:24 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	cc;

	str = (char *)s;
	i = ft_strlen(s);
	cc = (char)c;
	if (!str)
		return (NULL);
	while (*str)
		str++;
	while (i >= 0)
	{
		if (*str == cc)
			return (str);
		str--;
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s\n", ft_strrchr("atripouille", 't' + 256));
// 	printf("%s\n", strrchr("atripouille", 't' + 256));
// }
