#include "libft.h"

static int	ft_word_counter(char const *s, char c)// c = delimitador desde y hata donde se genera el string, static porque solo sirve para una un script seria "privado" para que no se pueda cambiar ni usar desde afuera.
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
		i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **tab, int i)
{
	while (i >= 0)
	{
		free (tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static char	**ft_fill_tab(char const *s, char c, char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			k = 0;
			tab[j] = malloc(sizeof(char) * (ft_word_len(s + i, c) + 1));
			if (!tab[j])
				return (ft_free(tab, j));
			while (s[i] && s[i] != c)
				tab[j][k++] = s[i++];
				tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)// guarda los punteros por eso es doble puntero, guarda la posicion de memoria que te lleva al puntero
{
	char	**tab;// substring

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	tab = ft_fill_tab(s, c, tab);
	return (tab);
}
devuelve punteros
