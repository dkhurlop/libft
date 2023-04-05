/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:17:08 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/03/30 18:56:43 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (src < dst)
		while (len --)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}

#include <stdio.h>
#include <string.h>

int main() {
   char str1[50] = "Hola Mundo!"; // Cadena de texto original
   char str2[50]; // Cadena de destino para la copia
   printf("Antes de memmove: %s\n", str1); // Imprimir cadena original antes de la copia

   memmove(str2, str1, 5); // Copiar los primeros 5 caracteres de la cadena original en la cadena destino

   printf("Después de memmove: %s\n", str2); // Imprimir cadena destino después de la copia

   return 0;
}

En este ejemplo, se crea una cadena de texto llamada "str1" con un valor inicial de "Hola Mundo!". 
	También se crea otra cadena de texto llamada "str2" que será la cadena destino para la copia. Luego, 
se llama a la función memmove para copiar los primeros 5 caracteres de la cadena original "str1" en la cadena destino "str2". 
	Finalmente, se imprime la cadena destino después de la copia para verificar que la función memmove haya funcionado correctamente.
