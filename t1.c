//Write a program to create a thread that prints “Hello, World!” and then terminates.
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void* myfun(void* arg){
printf("Hello,World!\n");
}
int main(){
pthread_t thread;
pthread_create(&thread,NULL,myfun,NULL);
pthread_join(thread,NULL);
return 0;
}
