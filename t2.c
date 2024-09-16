//Write a program that creates a thread and passes an integer argument to it. The thread should print the square of the integer.
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
void* square(void* arg){
int a=*((int*)arg);
int square=a*a;
printf("Square of the number %d",a);
printf(" is:%d\n",square);
return NULL;
}
int main(){
pthread_t thread;
int n=10;
pthread_create(&thread,NULL,square,&n);
pthread_join(thread,NULL);
return 0;
}

