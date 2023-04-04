/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:30:37 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/04/03 11:04:57 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
		len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len != 0)
		len--;
	return (ft_substr((char *)s1, 0, len + 1));
}
