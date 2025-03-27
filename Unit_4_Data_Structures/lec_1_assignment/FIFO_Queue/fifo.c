/*
 ============================================================================
 Name        : FIFO.c
 Author      : Joseph Nader
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 #include "fifo.h"


#define DPRINTF(...)  {fflush(stdout);\
                      fflush(stdin);\
                      printf(__VA_ARGS__);\
                      fflush(stdout);\
                      fflush(stdin);}
					  
 E_Buffer_Status FIFO_init (FIFO_Buf_t* fifo  , element_type* buff , unsigned int buff_length)
 {
     fifo->base = buff ;
     fifo->head = fifo->base ;
     fifo->tail = fifo->base ;
     fifo->length = buff_length;
     fifo->count = 0 ;
 
     if(fifo->base && fifo->length)
         return FIFO_no_error ;
     else
         return FIFO_null ;
 
 }
 
 E_Buffer_Status FIFO_IS_Buf_Full ( FIFO_Buf_t* fifo )
 {
     if( !fifo->head || !fifo->base || !fifo->tail )
         return FIFO_null;
 
     if(fifo->count >= fifo->length)
	 {
         DPRINTF(" Queue Is Full .. \n") ;
         return FIFO_full ;
     }
 
     return FIFO_no_error ;
 }
 
 E_Buffer_Status FIFO_enqueue ( FIFO_Buf_t* fifo ,  element_type* item)
 {
     if( FIFO_IS_Buf_Full (fifo) == FIFO_no_error )
     {
         *(fifo->head) = *item ;
         fifo->count++ ;
 
         //Circular FIFO
         if(fifo->head == (fifo->base + (fifo->length * sizeof(element_type) ) ))
             fifo->head = fifo->base ;
         else
             fifo->head ++ ;
 
         return FIFO_no_error ;
     }
     else
     {
         DPRINTF(" FIFO ENQUEUE FAILED \n");
         return( FIFO_IS_Buf_Full (fifo)  );
     }
 }
 
 E_Buffer_Status FIFO_dequeue (FIFO_Buf_t* fifo , element_type* DEQ_Data)
 {
     //check is fifo is exist
     if(!fifo->base || !fifo->head || !fifo->tail)
         return FIFO_null ;
 
     //check ia buffer is empty
     if(fifo->count ==  0 )
     {
         DPRINTF("FIFO S EMPTY \n");
             return FIFO_empty ;
     }
 
     *DEQ_Data = *(fifo->tail) ;
     fifo->count-- ;
 
     //Circular fifo
     if(fifo->tail == (fifo->tail + (fifo->length * sizeof(element_type) ) ))
         fifo->tail = fifo->base ;
     else
         fifo->tail++ ;
     return FIFO_no_error ;
 }
 
 E_Buffer_Status FIFO_print(FIFO_Buf_t* fifo)
 {
    element_type* temp ;
     int i = 0 ;
     if(fifo->count==0)
     {
         DPRINTF("FIFO is empty\n") ;
         return FIFO_empty ;
 
     }
     temp = fifo->tail ;
     DPRINTF("\n ========== fifo print ========== \n") ;
     for(i = 0 ; i < fifo->count ; i++)
     {
             DPRINTF("\t %X \n" , *temp) ;
             temp++ ;
     }
     DPRINTF("\n ================================ \n") ;
 
 }
 