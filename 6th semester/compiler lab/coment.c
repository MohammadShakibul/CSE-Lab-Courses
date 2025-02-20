#include <stdio.h>
int main()
{
char str[20];
scanf("%s",&str);
printf("%s", str);
int length = sizeof(str);

for (int i=0;i<=length;i++){
    if(str[i]=='/') {
        if(str[i]=='/'){
            printf("single line comand");
            }
        }
    else if(str[i]=='*'){
        if(str[i+1]=='/'){
            printf("multyple line comand");
        }
    }
    else {
         printf("It's not comand");
    }
    }
    return 0;
}
