#include <stdio.h>
void fun1();
void fun2();
void fun3();
void fun4();
int main(void){
   fun4();
   return 0;
}
void fun1(){

}
void fun2(){

}
void fun3(){
   int i;
   for(i=0;i<4;i++)printf("hello %d",i+1);
}
void fun4(){

}
