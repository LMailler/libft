/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmailler <lmailler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:18:01 by lmailler          #+#    #+#             */
/*   Updated: 2017/06/27 22:18:03 by lmailler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*dest;

	if (!(dest = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		if (!(dest->content = (t_list *)malloc(sizeof(content_size))))
			return (NULL);
		dest->content = ft_memcpy(dest->content, content, content_size);
		dest->content_size = content_size;
	}
	else
	{
		dest->content = NULL;
		dest->content_size = 0;
	}
	dest->next = NULL;
	return (dest);
}
