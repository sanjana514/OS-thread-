//Change the program so that each thread receives an integer argument (e.g., last three digits of your ID) and prints a message that includes this number.
//another way to solve
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
void* message(void* a){
char* c=(char*)a;
printf("%s\n",c);
return NULL;
}
void* integer(void* a){
int b=*((int*)a);
printf("The id num is:%d\n",b);
return NULL;
}
int main(){
pthread_t t1,t2,t3;
int n1,n2,n3;
n1=1;
n2=3;
n3=6;
char m1[50]="Hello:I am thread1!";
char m2[50]="Hi,I am thread2!";
char m3[50]="Hello,I am thread3!";
pthread_create(&t1,NULL,message,m1);
pthread_create(&t1,NULL,integer,&n1);
pthread_join(t1,NULL);
pthread_create(&t2,NULL,message,m2);
pthread_create(&t2,NULL,integer,&n2);
pthread_join(t2,NULL);
pthread_create(&t3,NULL,message,m3);
pthread_create(&t3,NULL,integer,&n3);
pthread_join(t3,NULL);
printf("All threads are completed\n");
return 0;
}


