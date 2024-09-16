//Change the program so that each thread receives an integer argument (e.g., last three digits of your ID) and prints a message that includes this number.
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void* integer(void* a){
int b=*((int*)a);
printf("The id num is:%d\n",b);
}
int main(){
pthread_t t1,t2,t3;
int n1,n2,n3;
n1=1,n2=3,n3=6;
printf("I am first thread\n");
pthread_create(&t1,NULL,integer,&n1);
pthread_join(t1,NULL);
printf("I am 2nd thread\n");
pthread_create(&t2,NULL,integer,&n2);
pthread_join(t2,NULL);
printf("I am Third thread\n");
pthread_create(&t3,NULL,integer,&n3);
pthread_join(t3,NULL);
printf("All threads are completed\n");
return 0;
}



