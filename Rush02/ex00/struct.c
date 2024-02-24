struct  Dict
{
    int key;
    char *value;
}
    
struct  Dict *get_dico(char *line)
{
    int i;

    i = 0;
    Dict tab[1000];
    //tab = malloc(/*Determiner taille*/)
    while(i < (5/*nbr de lignes*/))
    {

    
    tab[i].key = atoi(line[]);
    tab[i].value = getalpha(line[]);
    i++;
    }
    return (tab);
}

int main()
    {}