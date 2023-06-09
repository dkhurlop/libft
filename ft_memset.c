/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:43:02 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/03/30 17:52:24 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len--)
		*str++ = c;
	return (b);
}
/*int		main(int argc, const char *argv[])
{
	char *tmp;

	tmp = (char *)ft_memset((void *)argv[1], argv[2][0], ft_atoi(argv[3]));
	ft_putstr_fd(tmp, 1);
	return (0);
}
*/
