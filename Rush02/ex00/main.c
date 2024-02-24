#include <str.h>
#define max_line 52
 // Je savais pas quoi mettre donc dans le doute
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        /*Traiter le cas de si on a 2 arguments : le premier etant un dictionnaire et le second un chiffre positif*/
        //if (x < 0)
        {
            write(1, "Dict Error\n", 11);
        }

    }
    else if(argc == 2)
    {
        //if()
        
        /*Traiter le cas de si on a 1 argument : c'est un nombre*/
        int x;
        char line[max_line];
        //x = open(numbers.dict, O_RONLY);
        if (x < 0)
        {
            write(1, "Dict Error\n", 11);
        }
        while(read(x, line, max_line)> 0) 
        /*Utilisation de read : 

        Le premier argument precise la source, ici le fichier ouvert plus haut x
        Le deuxieme argument precise le tampon ou seront stockes les valeurs lu par read, ici le tableau line
        Le troisieme argument precise le nombre d'octets qu'elle va lire (comme write)
        Ici elle va line max_line octets, puis lorsqu'elle va retourner a la ligne retournera le nombre d'octet traversed*/
    
        {
            //ecrire une fonction qui permet de recuperer le nombre avec son nom complet et son chiffre (?) sur line
        }


    }
    else
    {
        write(1, "Dict Error\n", 11);
    }

}

