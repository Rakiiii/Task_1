
#include <windef.h>
#include "Include_and_constants.h"








int ASKIITable()
{
    system("cls");
    printf("Table ASKII\n_______________________________|\nSymbol\t|Binary code|\tNumber\n");
    for(int i = 32 ; i <= 255 ; i++)
    {
        printf("-------------------------------|\n");
        printf("%c\t|" ,(char)i );
        BinaryNumbers( i , 7 );
        printf("|\t%i\n" , i);
    }
    return 0;
}

int ASKIISymbol()
{
    system("cls");
    char Number = ' ';
    printf("Print your number_ ");
    Number = getchar();
    printf("Symbol-%c , hex-%x , oct-%o , dec-%i " , Number , Number , Number , Number);
    printf("bin-");
    BinaryNumbers( Number , 7 );
    printf("\n");
    return 0;
}

int main()
{
    setlocale(LC_ALL ,"Russian");
    while(TRUE)
    {
        system("cls");
        printf("1.Print all ASKII info about your element\n2.Print whole ASKII table\n3.Exit\n");
        char Choose = getch();
       switch (Choose)
       {
           case '2' :
               ASKIITable();
               printf("Press any button to restart the programme_");
               getch();
               break;

           case '1' :
               ASKIISymbol();
               printf("Press any button to restart the programme_");
               getch();
               break;

           case '3' :
               return 0;

           default:
               printf("Try again");
               int i = 0;
               while(i <= 80)i++;
       }
    }
}