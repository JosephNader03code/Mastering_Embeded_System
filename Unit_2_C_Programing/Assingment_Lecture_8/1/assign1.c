#include "stdio.h"

int main(){

int *ptrm = NULL;
int m ;
m = 29;
ptrm =&m ;

printf("Address of m : 0x%x \n",  ptrm);
  printf("Value of m : %d\n",*ptrm);  

 int *ab ;
 m=34 ;
 ab = &m ;
  printf("Now ab is assigned with the address of m. \n"); 
  printf("The value of m assigned to 34 now. \n");
  printf("Address of pointer ab : ox%x\n",ptrm);
  printf("Content of pointer ab : %d\n",*ptrm);
  
  *ab = 7;
printf("The pointer variable ab is assigned with the value 7 now.  \n");
printf("Address of pointer ab : ox%x\n",ptrm);
  printf("Content of pointer ab : %d\n",*ptrm);

return 0 ;
}