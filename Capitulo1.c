
#include <stdio.h>


////----SEC 1.5.1----////

/*
On Linux systems and OS X, the character to input to
cause an EOF is Ctrl-D. For Windows, it's Ctrl-Z.

Depending on the operating system, this character
will only work if it's the first character on a line,
i.e. the first character after an Enter. Since console
input is often line-oriented, the system may also not
recognize the EOF character until after you've followed it up with an Enter.
A
nd yes, if that character is recognized as an EOF,
then your program will never see the actual character.
Instead, a C program will get a -1 from getchar().

*/

/*
int    main()
    {
        int c;
        while ((c=getchar())!=EOF)
            //putchar(c);

    }

*/
//END SEC 1.5.1

////----SEC 1.5.2----////
    //DESC:Contar caracteres
/*
int    main()
    {
        long cuentaLong=0; //Variable para contar cuantos caracteres
        double cuentaDouble=0;//Misma funcion pero para probar distintos tipos de variables


        while (getchar()!=EOF)
            {
            ++cuentaLong;
            ++cuentaDouble;
            }

        printf("%ld\n",cuentaLong); //Imprime una varable long
        printf("%f\n",cuentaDouble); //Imprime un double
        printf("%.0f\n",cuentaDouble); //Imprimi sin decimales


    }
*/
//END SEC 1.5.2

////----SEC 1.5.2----////
//DESC: Cuenta la cantidad de salto de lineas
/*
int main ()
{
    int c, nl;
    nl=0;
    while((c=getchar())!=EOF)
        if (c=='\n')
            ++nl;
    printf("La cantidad de lineas son: ");
    printf("%d\n",nl);


}
*/
//END SEC 1.5.2


////----Exercise 1.8 ----////
//@brief cuenta la cantidad de lines, tab y espacios
/*
int main()
{

    int c, nl=0 , nt=0 , nb =0;

    printf("Ingrese el texto \n");
    while((c=getchar())!=EOF)
    {
        if (c=='\n')  ++nl;
        if (c=='\t')
            ++nt;
        if (c==' ')
            ++nb;
    }
    printf("La cantidad de lineas son: ");
    printf("%d\n",nl);
    printf("La cantidad de tabs son: ");
    printf("%d\n",nt);
    printf("La cantidad de espacios son: ");
    printf("%d\n",nb);
}
*/
////END Exercise 1.8



