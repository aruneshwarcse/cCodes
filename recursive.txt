#include<stdio.h>
void main(){
static int i=1;
 if(i<=100)
   printf(" %d",i++);

   main();
}
