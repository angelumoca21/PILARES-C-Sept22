#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char str1[50],str2[50];
bool resp;

int main()
{
    printf("Ingresa la palabra 1:\n");
    gets(str1);
    printf("Ingresa la palabra 2:\n");
    gets(str2);
    resp = strcmp(str1,str2);
    printf("%d\n",resp);
    //si resp->0 los strings son iguales
    //si resp->1 Los strings son diferentes
    printf("Antes de concatenar:%s\n",str2);
    strcat(str2,str1);
    printf("Despues de concatenar:%s\n",str2);
    printf("%s",str2);   
    return 0;
}