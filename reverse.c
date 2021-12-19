#include<stdio.h>
#include<string.h>
void reverse(char *p, char *  q)
{
    char temp =*p;
    *p=*q;
    *q=temp;
    if(p<q)
    reverse(++p,--q);

}

main()
{
    char str[100]="Hello";

    reverse(str,str+(strlen(str)-1));

    printf("%s\n",str);

}