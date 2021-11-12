/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:22:11 by enijakow          #+#    #+#             */
/*   Updated: 2021/11/12 16:26:37 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reader_destroy(struct s_reader *reader)
{
	if (reader->autofree && reader->c_str != NULL)
		ft_oops("Can't decide on the function to call to free the string!");
	ft_object_destroy(&reader->_);
}
