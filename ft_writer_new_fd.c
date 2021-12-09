/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_new_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:36:11 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/09 13:38:23 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_writer	*ft_writer_new_fd(int fd)
{
	struct s_writer	*writer;

	writer = ft_memory_alloc(sizeof(struct s_writer));
	if (writer != NULL)
		ft_writer_create_fd(writer, fd);
	return (writer);
}
