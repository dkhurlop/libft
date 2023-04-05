/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:55:26 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/03/30 18:07:28 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}

#include <stdio.h>
#include <string.h>

int main() {
   char str[50] = "Hola Mundo!"; // Cadena de texto a ser modificada
   printf("Antes de memset: %s\n", str); // Imprimir cadena antes de la modificación

   memset(str, '$', 7); // Modificar los primeros 7 caracteres de la cadena con '$'

   printf("Después de memset: %s\n", str); // Imprimir cadena después de la modificación

   return 0;
}
