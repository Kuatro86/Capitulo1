
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
//@brief cuenta la cantidad de lineas, tab y espacios
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


////----SEC 1.5.4----////
//@brief cuenta las lineas, las palabras y los caracteres


/*

#define IN  1   //inside a word
#define OUT 0   //Outside a word
int main()
{
    int c, numLines, numWord, numchar, state;
    state=OUT;
    numchar=numLines=numWord=0;

    while ((c=getchar())!=EOF)  {
        ++numchar;
        if (c=='\n')
            ++numLines;
        if (c==' ' || c=='\n' || c=='\t')
            state=OUT;
        else if (state==OUT){
            state=IN;
            ++numWord;
        }
    }
    printf("%d %d %d \n", numLines, numWord, numchar);
}
*/

//END SEC 1.5.4



////----SEC 1.6----////
//@brief Uso de Arrays
/*
main()
{

    int c,i, nWhite, nOther;
    int ndigit[10];

    nWhite=nOther=0;
    for (i=0;i<10;++i)
        ndigit[i]=0;

    while ((c=getchar())!=EOF)
        if (c>='0' && c<='9')
            ++ndigit[c-'0'];
        else if (c==' ' || c=='\n' || c=='\t')
            ++nWhite;
        else
            ++nOther;

    printf("Digits =");
    for (i=0; i < 10 ; ++i)
        printf(" %d= %d \n", i, ndigit[i]);
    printf(", white space= %d, Other= %d \n", nWhite, nOther);


}
*/
//END SEC 1.6



////----Exercise 1.19 ----////
//@brief Dal vuelta una linea de texto


#define MAXLINE 100 //Valor maximo de la linea
void reverse (char line[],char revLine[], int maxLine); //Invierte la linea de texto
int getline(char line[], int maxLine); //Captura una linea de texto

int main()
{

    char line[MAXLINE];  //Linea original
    char revLine[MAXLINE]; //Linea invertida


    reverse(line,revLine,getline(line,MAXLINE));

    //Imprimir los valores
    printf("-----SOFT-------\n");
    printf("%s",line);
    printf("------------\n");
    printf("%s",revLine);
    printf("------------\n");
}

//Funcion getline - Basicamente pide datos hasta que se un enter, se llega al maximo
//o un fin de programa
int getline(char s[], int lim)
{
    int c,i;

    //Recorre hasta el limite max, evaluando los valores que va ingrasando
    for (i=0;i<lim-1 && (c=getchar())!= EOF && c!='\n'; ++i)
        s[i]=c; //Va formando la linea
    if (c=='\n')
        {
            s[i]=c; // Le agrega el enter
            ++i;
        }
    s[i]='\0'; //Le agrega el cero como final
    return i;
}

//Invierte la linea de texto
void reverse (char l[],char r[], int maxL)
    {
        int x;
        for (x=0; x<=(maxL-2); ++x)
           r[x]=l[(maxL-x)-2];
       //Agrega los valores al final
        r[x]='\n';
       ++x;
        r[x]='\0';

    }
////END Exercise 1.8


