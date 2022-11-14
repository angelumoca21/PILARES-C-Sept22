#include<stdio.h>
#include<stdbool.h>

int x=0, y=1, z=0;

int main()
{
    printf("2==2:%d\n",2==2);
    printf("2==2.0:%d\n",2==2.0);
    printf("1==5:%d\n",1==5);
    printf("1.005>1.006:%d\n",1.005==1.006);
    printf("789!=789:%d\n",789!=789);
    printf("-3256<3256:%d\n",-3256<3256);
    printf("4%2==0:%d\n",4%2==0);
    printf("20/3<=7:%d\n",20/3<=7);
    printf("x=0, y=1, z=0\n");
    printf("x==y:%d\n",x==y);
    printf("x==z:%d\n",x==z);
    printf("x!=y:%d\n",x!=y);
    printf("x!=z:%d\n",x!=z);
    printf("x and z:%d\n",x && z);
    printf("not y:%d\n", !y);
    printf("z or y:%d\n",z || y);
    return 0;
}