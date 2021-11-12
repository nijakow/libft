/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cstr_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enijakow <enijakow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:04:48 by enijakow          #+#    #+#             */
/*   Updated: 2021/09/30 17:35:37 by enijakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_cstr_strlen(char *c_str)
{
	size_t	length;

	length = 0;
	while (c_str[length] != '\0')
		length++;
	return (length);
}
