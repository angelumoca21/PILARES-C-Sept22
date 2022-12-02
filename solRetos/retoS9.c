#include<stdio.h>
#include<string.h>

char palabra[50],palabraAux[50];
char silabaVocal[3]="way";
char silabaConsonante[2]="ay";
char inicial[1];
int j=0;

int main()
{
    printf("Ingresa la palabra a codificar:\n");
    gets(palabra);
    if (palabra[0] == 'a' || palabra[0] == 'e' || palabra[0] == 'i' || palabra[0] == 'o' || palabra[0] == 'u')
    {
        strcat(palabra,silabaVocal);
        printf("%s",palabra);
    }
    else
    {
        inicial[0]=palabra[0];
        for (int i=0;i<(strlen(palabra));i++)
        {
            if (i==0)
                continue;
            else
            {
                palabraAux[j]=palabra[i];
                j++;
            }
        }
        strcat(palabraAux,inicial);
        strcat(palabraAux,silabaConsonante);
        printf("%s",palabraAux);
    }
    return 0;
}