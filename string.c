#include<stdio.h>
#include<string.h>

void reverse(char *s)
{
    char *p =s;
    char *q= s+strlen(s)-1;
    char temp;

    while(p < q)
    {
        temp =*p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }

}

void swaptheword( char *s)
{
    int count =0;
    printf("%d\r\n" , sizeof(s));
    sl=0;

    int i =0;
    for(i=0;s[i];i++)
    if(s[i]==' ')
    count++;
    char *p[10];
    while(count)
    {
        for(i=0;s[i];i++)
        {
            if(s[i]==' ')
            {
                char *p[1]=(char*) malloc(i);
            }

        }

    }

}

int *get_me(void)
{
    int *a = malloc(sizeof(int));
    *a = 8;
    return a;
}
/// 10 threads 
// 1 global data needs to be protected

1. How many mutex
2. What if all threads read-only
3. If we add 10 more threads


int main()
{
    char *str="Hello world\n";]
    // printf("%d\r\n" , sizeof(str));
    reverse(str);
    int *ptr = get_me();
    printf("%d\r\n",*ptr);
}