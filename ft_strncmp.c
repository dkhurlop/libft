/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:55:15 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/04/03 12:22:07 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n -1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main() {
    const char *str1 = "Hello";
    const char *str2 = "Hellish";
    int result = strncmp(str1, str2, 4);
    
    if (result < 0) {
        printf("'%s' es lexicográficamente menor que '%s'.\n", str1, str2);
    } else if (result > 0) {
        printf("'%s' es lexicográficamente mayor que '%s'.\n", str1, str2);
    } else {
        printf("'%s' y '%s' son iguales hasta los primeros 4 caracteres.\n", str1, str2);
    }
    
    return 0;
}
En este ejemplo, se comparan los primeros 4 caracteres de las cadenas "Hello" y "Hellish". Como la 'o' en "Hello" es menor que la 'i' en "Hellish", la salida sería: "'Hello' es lexicográficamente menor que 'Hellish'."

La función strncmp es útil para realizar comparaciones de cadenas de manera controlada y limitada a un número específico de caracteres.
