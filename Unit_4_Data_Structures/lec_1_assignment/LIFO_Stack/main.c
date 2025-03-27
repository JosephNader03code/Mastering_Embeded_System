#include <stdio.h>
#include "stdlib.h"

#define Length_Buffer_Width 5

typedef struct {
	unsigned int length;
	unsigned int count ;
	unsigned int* head ; 
	unsigned int* base ; 
}Buffer_Type ;

typedef enum {
	Stack_null ,
	Stack_no_error ,
	Stack_empty ,
	Stack_full 
} Status ;


Status Add_Item ( Buffer_Type* Stack  , unsigned int item ) ;
Status Pop_Item ( Buffer_Type* Stack  , unsigned int* item ) ;
//Status Init     ( Buffer_Type* Stack  , unsigned int* item ) ;

int main ()
{
	
	unsigned int i , temp  ;
	unsigned int staticbufer [Length_Buffer_Width] ;
	
	Buffer_Type first_bufer ;
	
	//statically
	first_bufer.length = 5 ;
	first_bufer.base = staticbufer ;
	
	//set_head_pointer 
	first_bufer.head = first_bufer.base ;
	
	//set_current_count 
	first_bufer.count = 0 ;
	
	printf(" lifo push item : \n ") ;
	for(i = 0 ; i < 5 ; i++)
	{
		printf(" %d , \t" , i) ;
		Add_Item(&first_bufer , i) ;
	}
	
	printf("\n lifo pop item : \n ") ;
	for(i = 0 ; i < 5 ; i++)
	{
		Pop_Item(&first_bufer , &temp) ;
		printf(" %d , \t" , temp) ;
	}
	return 0 ;
}
/*Status Init     ( Buffer_Type* Stack  , unsigned int* item ){
*(stack->base) = item ;
  stack->head = stack->base ;
}
*/

Status Add_Item ( Buffer_Type* Stack  , unsigned int item )
{ 
if( Stack->count == Stack->length  )
return Stack_full ;

if( !Stack || !Stack->head || !Stack->base )
		return Stack_null ;
	
	*(Stack->head) = item ;
	Stack->head++ ;
	Stack->count++ ;
	
	return Stack_no_error ;
}
Status Pop_Item ( Buffer_Type* Stack  , unsigned int* item ){
	
	if( !Stack || !Stack->head || !Stack->base )
		return Stack_null ;
	
	if(Stack->head == Stack->base)
		return Stack_empty ;
	
		Stack->head--;
	*item = *(Stack->head) ;
	Stack->count-- ;
		
		return Stack_no_error ;
	
}
