#include <unistd.h>

ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		value;

	i = 0;
	value = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			value = 0;
		}
		i++;
	}
	return (value);
}

int word_count(char *str)
{
    int i;
    int compteur;
    int a;
    int b;

    i = 0;
    compteur = 0;
    while (str[i] != '\0')
    {
        a = (str[i] <= 'z' && str[i]>= 'a');
        b = (str[i] <= 'Z' && stri[i] >= 'A');
        if(a || b)
        {
            compteur++;
        }
    }
    return (compteur);
}

int number_count(char *str)
{
    int i;
    int compteur;
    int a;

    i = 0;
    compteur = 0;
    while (str[i] != '\0')
    {
        a = (str[i] <= '9' && str[i]>= '0');
        if(a)
        {
            compteur++;
        }
    }
    return (compteur);
}

char **ft_tokenize (char *src)
{
    char **tab;
    int i;
    int j;
    int k;

    tab = malloc(sizeof(char) * number_count(str) * word_count(str));

    while (str[i] != '\0')
    {
        if(str[i] != ' ' || str[i] != ':')
        {
            while ()  
        }
    }
}