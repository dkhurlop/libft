/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:01:33 by dkhurlop          #+#    #+#             */
/*   Updated: 2023/03/25 17:55:09 by dkhurlop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	char	*copy;
	size_t	i;	

	i = 0;
	copy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (copy == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
int main() {
    const char *str = "Hello, World!";
    
    char *duplicate = strdup(str);
    
    if (duplicate != NULL) {
        printf("Copia de la cadena: %s\n", duplicate);
        
        // Liberar la memoria asignada por strdup
        free(duplicate);
    } else {
        printf("No se pudo duplicar la cadena.\n");
    }
    
    return 0;
}
