/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmailler <lmailler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:18:31 by lmailler          #+#    #+#             */
/*   Updated: 2017/06/27 22:18:34 by lmailler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tsrc;
	unsigned char	*tdest;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	if (src < dest)
	{
		while (n--)
			tdest[n] = tsrc[n];
		return (tdest);
	}
	else
		return (ft_memcpy(tdest, tsrc, n));
}
