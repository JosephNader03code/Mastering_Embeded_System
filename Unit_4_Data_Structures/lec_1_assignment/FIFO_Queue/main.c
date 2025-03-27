#include <stdio.h>
#include <stdlib.h>
#include "fifo.h"

#define DPRINTF(...)  {fflush(stdout);\
                      fflush(stdin);\
                      printf(__VA_ARGS__);\
                      fflush(stdout);\
                      fflush(stdin);}

int main(void)
{
    FIFO_Buf_t FIFO_UART ;
    element_type i , temp ;
    element_type first[5];

    if (FIFO_init( &FIFO_UART , first , 5 ) == FIFO_no_error )
    DPRINTF(" FIFO init ---- is done \n") ;
    
    for(i = 0 ; i < 7 ; i++)
    {
        DPRINTF(" FIFO enqueue (%X) ---- is done \n" , i) ;
        if (FIFO_enqueue (&FIFO_UART , &i ) == FIFO_no_error)
       { DPRINTF(" FIFO enqueue ---- Is Done \n") ;}

        else 
       { DPRINTF(" FIFO enqueue ---- Failed \n") ;}
    }

    FIFO_print(&FIFO_UART) ;

    if(FIFO_dequeue(&FIFO_UART , &temp) == FIFO_no_error)
    DPRINTF("FIFO Dequeue %X --- DONE \n" , temp);

    FIFO_print(&FIFO_UART) ;

}