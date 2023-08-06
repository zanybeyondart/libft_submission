/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:32:27 by zvakil            #+#    #+#             */
/*   Updated: 2023/08/06 16:58:15 by zvakil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	bytes;
	void	*ptr;

	bytes = n * size;
	if (n == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ft_bzero (ptr, 1);
		return (ptr);
	}
	if ((int) n < 0 || (int) size < 0)
		return (NULL);
	ptr = malloc(size * n);
	if (NULL == ptr)
	{
		free(ptr);
		return (NULL);
	}
	ft_bzero(ptr, size * n);
	return (ptr);
}
