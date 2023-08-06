/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:56:38 by zvakil            #+#    #+#             */
/*   Updated: 2023/08/06 16:13:32 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	size_t			a;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	a = 0;
	while (a < n)
	{
		if (temp1[a] != temp2[a])
			return (temp1[a] - temp2[a]);
		a++;
	}
	return (0);
}
