/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_io.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:04:40 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 19:05:18 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_string_writefd(struct s_string *self, int fd)
{
	if (self->bytes != NULL)
	{
		write(fd, self->bytes, self->fill);
	}
}
