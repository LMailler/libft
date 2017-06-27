/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmailler <lmailler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 22:20:25 by lmailler          #+#    #+#             */
/*   Updated: 2017/06/27 22:20:28 by lmailler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	if (!(s1) || !(s2))
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = 0;
	l = 0;
	if (!(dest = (char *)malloc(sizeof(char) * (i + j))))
		return (NULL);
	while (s1[l])
		dest[k++] = s1[l++];
	l = 0;
	while (s2[l])
		dest[k++] = s2[l++];
	dest[k] = '\0';
	return (dest);
}
