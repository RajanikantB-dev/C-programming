#include<stdio.h>
#include<pthread.h>
#include<stdint.h>

pthread_mutex_t lock = PTHREAD_DEFAULT_MUTEX_INITIALIZER;

void* print(void *data)
{
    while(1)
    {
    pthread_mutex_lock(&lock);

    printf("inside the print function %d\n",*(int*) data);
    pthread_mutex_unlock(&lock);
    nanosleep(10);
    }
    return NULL;
}

main()
{
    pthread_t tid1,tid2;
    int a =10;
    int b =20;
    sem_get(int );

    pthread_create(&tid1,NULL,print,&a);
    pthread_create(&tid2,NULL,print,&b);

    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);


}