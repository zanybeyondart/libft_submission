/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:20:18 by zvakil            #+#    #+#             */
/*   Updated: 2023/08/06 22:56:07 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			b;
	char			*temp;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		temp = (char *)malloc(sizeof(char));
		temp[0] = '\0';
		return (temp);
	}
	b = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	temp = (char *)malloc((len + 1));
	if (!temp)
		return (NULL);
	while (s[start + b] != '\0' && b < len)
	{
		temp[b] = s[start + b];
		b++;
	}
	temp[b] = '\0';
	return (temp);
}
