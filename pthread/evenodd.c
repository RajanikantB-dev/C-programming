#include<stdio.h>
#include<pthread.h>
#define NUM_MAX 1000

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

int number=0;

void * printnumber1(void*arg)
{
    pthread_mutex_lock(&lock);
	while(number<NUM_MAX)
	{
		if(number%2==0)
		{
		 printf("even number =%d\n",number);
		 number =number +1;	
		}	
        else
        {
            //printf("in else of even\n");
            pthread_mutex_unlock(&lock);
        }
	
	}
    return NULL;
}

void* printnumber(void *arg)
{
    pthread_mutex_lock(&lock);
	while(number<NUM_MAX)
	{	
		if(number%2!=0)
		{
		printf("odd number =%d\n",number);
		number = number+1;
		}
        else
        {
           // printf("in else of odd\n");
            pthread_mutex_unlock(&lock);
        }
	
	}

	return NULL;
}

int main()
{

	pthread_t id1,id2;
	
	pthread_create(&id1,NULL,printnumber,NULL);
	pthread_create(&id2,NULL,printnumber1,NULL);
	
	pthread_join(id1,NULL);
	pthread_join(id2,NULL);

}




