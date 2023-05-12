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

/*falta libreria
int main() {
    const char *str = "Hello, World!";
    const char *sub = "World";
    
    char *result = strnstr(str, sub, strlen(str));
    
    if (result != NULL) {
        printf("Subcadena encontrada: %s\n", result);
    } else {
        printf("Subcadena no encontrada.\n");
    }
    
    return 0;
}
En este ejemplo, hemos definido nuestra propia implementación de strnstr 
que realiza una búsqueda de subcadenas limitada por el número máximo de caracteres len.
Luego, en el main, utilizamos nuestra función strnstr para buscar la subcadena "World" dentro de la cadena "Hello, World!
