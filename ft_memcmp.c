/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:10:15 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/01/30 18:31:27 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && *d1 == *d2)
	{
		d1++;
		d2++;
	}
	return ((int)(*d1 - *d2));
}

/*#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    int result = memcmp(str1, str2, 5);
    
    if (result < 0) {
        printf("El bloque de memoria apuntado por str1 es lexicográficamente menor que el bloque de memoria apuntado por str2.\n");
    } else if (result > 0) {
        printf("El bloque de memoria apuntado por str1 es lexicográficamente mayor que el bloque de memoria apuntado por str2.\n");
    } else {
        printf("Ambos bloques de memoria son iguales hasta los primeros 5 bytes.\n");
    }
    
    return 0;
}
En este ejemplo, se comparan los primeros 5 bytes de los bloques de memoria apuntados por str1 y str2.
Como ambos bloques de memoria contienen los mismos caracteres hasta los primeros 5 bytes, el resultado sería: "Ambos bloques de memoria 
son iguales hasta los primeros 5 bytes.
