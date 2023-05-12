/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:41:23 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/01/30 18:30:26 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}

int main() {
    const char buffer[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int value = 40;
    void *result = memchr(buffer, value, sizeof(buffer));
    
    if (result != NULL) {
        printf("El valor %d se encontró en la posición %ld del bloque de memoria.\n", value, (char*)result - buffer);
    } else {
        printf("El valor %d no se encontró en el bloque de memoria.\n", value);
    }
    
    return 0;
}
En este ejemplo, se busca la primera aparición del valor 40 en el bloque de memoria buffer. Si se encuentra el valor, se muestra la posición en el bloque de memoria donde se encontró. En este caso, la salida sería: "El valor 40 se encontró en la posición 3 del bloque de memoria."

La función memchr es útil cuando se necesita buscar un valor específico en un bloque de memoria, independientemente de su interpretación como caracteres o cualquier otro tipo de dato.





User
que hace la funcion memcpy
ChatGPT
La función memcpy es una función de la biblioteca estándar del lenguaje C que se utiliza para copiar un bloque de memoria de un lugar a otro. Su prototipo es el siguiente:

c
Copy code
void *memcpy(void *destination, const void *source, size_t num);
La función memcpy copia num bytes de memoria desde la ubicación de memoria apuntada por source a la ubicación de memoria apuntada por destination. Ambos punteros deben ser punteros a memoria válidos.

Es importante destacar que memcpy simplemente copia bytes de memoria sin tener en cuenta el contenido de los datos. No interpreta el contenido como cadenas de caracteres ni realiza ningún tipo de análisis. La función se utiliza comúnmente para copiar bloques de memoria, como matrices o estructuras, de un lugar a otro.

Aquí hay un ejemplo de uso de la función memcpy:

c
Copy code
#include <stdio.h>
#include <string.h>

int main() {
    const char source[] = "Hola, Mundo!";
    char destination[20];
    size_t num = sizeof(source);
    
    memcpy(destination, source, num);
    
    printf("El contenido copiado es: %s\n", destination);
    
    return 0;
}
En este ejemplo, se copia el contenido de la cadena de caracteres source en el arreglo destination utilizando la función memcpy. El tamaño de la copia se determina mediante sizeof(source). Luego, se muestra el contenido copiado utilizando printf. En este caso, la salida sería: "El contenido copiado es: Hola, Mundo!".

La función memcpy es útil cuando se necesita copiar bloques de memoria, como datos en arreglos, estructuras o cualquier otro tipo de dato almacenado en memoria.





User
que hace memmove
ChatGPT
La función memmove es una función de la biblioteca estándar del lenguaje C que se utiliza para copiar un bloque de memoria de manera segura, incluso cuando los bloques de origen y destino se superponen. Su prototipo es el siguiente:

c
Copy code
void *memmove(void *destination, const void *source, size_t num);
La función memmove copia num bytes de memoria desde la ubicación de memoria apuntada por source a la ubicación de memoria apuntada por destination. A diferencia de la función memcpy, memmove maneja de forma segura la superposición de bloques de memoria, lo que significa que se puede utilizar incluso cuando los bloques de origen y destino se solapan.

La implementación de memmove se asegura de que la copia de los datos se realice correctamente, ya sea copiando de forma ascendente o descendente según sea necesario para evitar conflictos cuando los bloques de memoria se solapan. Esto garantiza que los datos se copien de manera segura y se preserva la integridad de los datos.

Aquí hay un ejemplo de uso de la función memmove:

c
Copy code
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    size_t len = strlen(str) + 1;
    char buffer[20];
    
    memmove(buffer, str, len);
    
    printf("El contenido copiado es: %s\n", buffer);
    
    return 0;
}
En este ejemplo, se copia el contenido de la cadena de caracteres str en el arreglo buffer utilizando la función memmove. El tamaño de la copia se determina mediante strlen(str) + 1 para incluir el carácter nulo de terminación. Luego, se muestra el contenido copiado utilizando printf. La salida será: "El contenido copiado es: Hello, World!".

La función memmove es útil cuando se necesita copiar bloques de memoria que podrían superponerse. Proporciona una forma segura y confiable de realizar la copia, garantizando que los datos se mantengan intactos incluso en situaciones de solapamiento.





User
me podrias dar un ejemplo con superposicion
ChatGPT
¡Claro! Aquí tienes un ejemplo que muestra cómo utilizar memmove cuando los bloques de memoria de origen y destino se superponen:

c
Copy code
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    size_t len = strlen(str);
    
    // Superponiendo los bloques de origen y destino
    memmove(str + 6, str, len - 6);
    
    printf("El contenido modificado es: %s\n", str);
    
    return 0;
}
En este ejemplo, tenemos una cadena de caracteres inicial "Hello, World!". Utilizamos memmove para copiar una parte de la cadena (str) dentro de sí misma, pero desplazando los caracteres hacia la derecha.

En particular, utilizamos str + 6 como el destino, lo que significa que el bloque de destino se solapa con los primeros 6 caracteres de la cadena original. De esta manera, estamos moviendo los caracteres "Hello," dentro de la cadena, desplazándolos hacia la derecha.

La salida de este ejemplo será: "El contenido modificado es: Hello, Hello, World!".

Este ejemplo demuestra cómo memmove permite copiar datos de manera segura incluso cuando los bloques de memoria se solapan. En este caso, la función se encarga de realizar la copia correctamente, asegurando que los caracteres se muevan a su nueva posición sin perder o sobrescribir datos importantes.





User
que hace la funcion  memcmp
ChatGPT
La función memcmp es una función de la biblioteca estándar del lenguaje C que se utiliza para comparar dos bloques de memoria. Su prototipo es el siguiente:

c
Copy code
int memcmp(const void *ptr1, const void *ptr2, size_t num);
La función memcmp compara los primeros num bytes de los bloques de memoria apuntados por ptr1 y ptr2. Devuelve un valor entero que indica la relación entre los bloques de memoria comparados:

Si el valor devuelto es menor que cero, indica que el bloque de memoria apuntado por ptr1 es lexicográficamente menor que el bloque de memoria apuntado por ptr2.
Si el valor devuelto es igual a cero, indica que ambos bloques de memoria son iguales hasta los primeros num bytes.
Si el valor devuelto es mayor que cero, indica que el bloque de memoria apuntado por ptr1 es lexicográficamente mayor que el bloque de memoria apuntado por ptr2.
La comparación se realiza byte a byte, utilizando los valores numéricos de los bytes en los bloques de memoria. La comparación es sensible a la estructura de memoria, es decir, el contenido y orden de los bytes en los bloques.

Aquí hay un ejemplo de uso de la función memcmp:

c
Copy code
#include <stdio.h>
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
En este ejemplo, se comparan los primeros 5 bytes de los bloques de memoria apuntados por str1 y str2. Como ambos bloques de memoria contienen los mismos caracteres hasta los primeros 5 bytes, el resultado sería: "Ambos bloques de memoria son iguales hasta los primeros 5 bytes."

La función memcmp es útil cuando se necesita comparar bloques de memoria de manera controlada y limitada a un número específico de bytes. Puede ser utilizada para comparar cualquier tipo de datos almacenados en memoria, no solo cadenas de caracteres.





User
que hace la funcion strnstr
ChatGPT
La función strnstr no forma parte de la biblioteca estándar del lenguaje C, pero es una función comúnmente implementada en algunas bibliotecas o entornos de desarrollo. Su función es buscar la primera aparición de una subcadena dentro de una cadena dada, pero limitando la búsqueda a un número máximo de caracteres.

El prototipo típico de la función strnstr es el siguiente:

c
Copy code
char *strnstr(const char *haystack, const char *needle, size_t len);
haystack es la cadena en la cual se realizará la búsqueda.
needle es la subcadena que se desea encontrar.
len es el número máximo de caracteres en haystack que se considerarán en la búsqueda.
La función strnstr busca la subcadena needle dentro de haystack hasta un máximo de len caracteres. Devuelve un puntero a la primera aparición de needle dentro de haystack si se encuentra, o un puntero nulo (NULL) si no se encuentra.

Es importante destacar que strnstr busca la subcadena sin distinguir entre mayúsculas y minúsculas (es una búsqueda insensible a mayúsculas y minúsculas). Además, strnstr solo busca la subcadena dentro de los primeros len caracteres de haystack.

Aquí tienes un ejemplo de cómo se podría implementar strnstr:

c
Copy code
#include <stdio.h>
#include <string.h>

char *strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len = strlen(needle);
    
    if (needle_len == 0) {
        return (char *)haystack;
    }
    
    while (*haystack && len >= needle_len) {
        if (strncmp(haystack, needle, needle_len) == 0) {
            return (char *)haystack;
        }
        haystack++;
        len--;
    }
    
    return NULL;
}
/* falta libreria
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
En este ejemplo, hemos definido nuestra propia implementación de strnstr que realiza una búsqueda de subcadenas limitada por el número máximo de caracteres len. Luego, en el main, utilizamos nuestra función strnstr para buscar la subcadena "World" dentro de la cadena "Hello, World!".

La salida de este ejemplo será: "Subcadena encontrada: World".

Ten en cuenta que la implementación de strnstr puede variar dependiendo del entorno de desarrollo o la biblioteca utilizada. En algunos sistemas, la función strnstr puede estar disponible directamente en la biblioteca estándar o en alguna otra biblioteca específica.






