/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:19:01 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/04/04 12:33:51 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}
/*
int main() {
    const char *str = "Hello, World!";
    char ch = 'o';
    char *result = strchr(str, ch);
    
    if (result != NULL) {
        printf("El carácter '%c' se encontró en la posición %ld de la cadena.\n", ch, result - str);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);
    }
    
    return 0;
}
