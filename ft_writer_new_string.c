/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writer_new_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:34:23 by enijakow          #+#    #+#             */
/*   Updated: 2021/12/09 13:38:30 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_writer	*ft_writer_new_string(struct s_string *string)
{
	struct s_writer	*writer;

	writer = ft_memory_alloc(sizeof(struct s_writer));
	if (writer != NULL)
		ft_writer_create_string(writer, string);
	return (writer);
}
