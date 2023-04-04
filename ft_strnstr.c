/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:17:40 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/03/25 18:14:03 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*h, const char	*n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && (i + j) < len)
		{
			if (n[j + 1] == '\0')
				return ((char *)h + i);
			j++;
		}	
		i++;
	}
	return (0);
}
