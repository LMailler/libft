/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmailler <lmailler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:18:09 by lmailler          #+#    #+#             */
/*   Updated: 2017/06/27 22:18:12 by lmailler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*temp;

	temp = (unsigned char *)src;
	dt = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dt[i] = temp[i];
		if (temp[i] == (unsigned char)c)
			return (&(dt[i + 1]));
		i++;
	}
	return (NULL);
}
