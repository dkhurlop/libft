/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:28:56 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/01/27 18:51:34 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (NULL);
}
/*
int main() {
    const char *str = "Hello, World!";
    char ch = 'o';
    char *result = strrchr(str, ch);
    
    if (result != NULL) {
        printf("El carácter '%c' se encontró en la posición %ld desde el final de la cadena.\n", ch, strlen(str) - (result - str));
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", ch);
    }
    
    return 0;
}
