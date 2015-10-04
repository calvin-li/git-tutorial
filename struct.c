#include <stdio.h>

struct student {
  int  mid;
  int final;
  int hmws;
  float avg;
};

void main(void){
   struct student sam = {85, 90, 88, -1};
   struct student tom = {93, 88, 91, -1};
   struct student *he = &tom;  
   
   tom = sam;
   
   printf("tom = {%d, %d, %d}\n",  tom.mid, tom.final, tom.hmws); 

   printf("*he = {%d, %d, %d}\n",  he->mid, he->final, he->hmws); 

   printf("*he = {%d, %d, %d}\n",  (*he).mid, (*he).final, (*he).hmws); 
}






