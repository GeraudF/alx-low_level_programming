# inclure  " main.h "

/* *
* _strncat - concaténer deux chaînes
* @dest : chaîne
* @src : chaîne
* @n : nombre d'éléments à concaténer dans
* Retour : pointeur vers `dest` résultant
 */

char * _strncat ( char *dest, char *src, int n)
{
int je, c ;

pour (i = 0 ; dest[i] != ' \0 ' ; i++)
;

pour (c = 0 ; src[c] != ' \0 ' && n > 0 ; c++, n--, i++)
{
destination[i] = source[c] ;
}
retour (dest);
}
