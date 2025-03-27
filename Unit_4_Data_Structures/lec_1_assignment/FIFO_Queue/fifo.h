/*
 * fifo.h
 *
 *  Created on: Mar 21, 2025
 *      Author: hp
 */

 #ifndef FIFO_H_
 #define FIFO_H_

 #include <stdio.h>
 #include "stdint.h"
 #include <stdlib.h>

 //USER Configuration ==================
 // select the element type (uint8_t , uint16_t, uint24_t , uint32_t .... )
 #define element_type uint8_t
 
 typedef struct {
     unsigned int length ;
     unsigned int count ;
     element_type* base ;
     element_type* tail ;
     element_type* head ;
 }FIFO_Buf_t;
 
 typedef enum {
     FIFO_no_error ,
     FIFO_full ,
     FIFO_empty ,
     FIFO_null
 }E_Buffer_Status;
 //=============
 
 //FIFO APIS ==
 
 E_Buffer_Status FIFO_enqueue ( FIFO_Buf_t* fifo ,  element_type* ENQ_Data) ;
 E_Buffer_Status FIFO_dequeue (FIFO_Buf_t* fifo , element_type* DEQ_Data) ;
 E_Buffer_Status FIFO_IS_Buf_Full ( FIFO_Buf_t* fifo ) ;
 E_Buffer_Status FIFO_print (FIFO_Buf_t* fifo ) ;
 E_Buffer_Status FIFO_init (FIFO_Buf_t* fifo  , element_type* buff , unsigned int buff_length) ;
 
 
 #endif /* FIFO_H_ */
 