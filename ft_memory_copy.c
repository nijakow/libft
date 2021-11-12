/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:14:25 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 17:40:09 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memory_copy(void *dst, void *src, size_t byte_count)
{
	size_t	counter;

	if ((dst != NULL) && (src != NULL))
	{
		counter = 0;
		while (counter < byte_count)
		{
			((unsigned char *) dst)[counter] = ((unsigned char *) src)[counter];
			counter++;
		}
	}
}
