#include <stdio.h>
void fun1();
void fun2();
void fun3();
void fun4();

//komentarz

void fun5()
{

}

int main(void){
   fun4();

//to jest moje!

   printf("szukam konfliktu");



   return 0;
}
void fun1(){
	int zero = 0;
	printf("%d\n", zero);
}
void fun2(){
  printf("To je funkcja dwa, tego nie pomalujesz...");
}
void fun3(){
   int i;
   for(i=0;i<4;i++)printf("hello %d",i+1);
}
void fun4(){

while (1)
{
printf("HA HA HA");
}
}
