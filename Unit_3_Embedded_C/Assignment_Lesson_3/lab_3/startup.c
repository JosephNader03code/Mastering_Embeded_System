#include <stdint.h>
#define STACK_START_SP 0x20001000
extern int main(void);
void Rest_Handler(void);

 extern unsigned int _S_DATA;
 extern unsigned int _E_DATA;
 extern unsigned int _S_bss;
 extern unsigned int _E_bss;
 extern unsigned int _E_text;


void Default_Handler(void)
{
	Rest_Handler();
}
void NMI_Handler(void) __attribute__((weak , alias("Default_Handler")));;
void Fault_Handler(void) __attribute__((weak , alias("Default_Handler")));;
void MM_Fault_Handler(void) __attribute__((weak , alias("Default_Handler")));;
void Bus_Handler(void) __attribute__((weak , alias("Default_Handler")));;
void Usage_Handler(void) __attribute__((weak , alias("Default_Handler")));;

uint32_t vectors [] __attribute__((section(".vectors"))) =
 {
	(uint32_t) STACK_START_SP ,
	(uint32_t) &Rest_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &Fault_Handler,
	(uint32_t) &MM_Fault_Handler,
	(uint32_t) &Bus_Handler,
	(uint32_t) &Usage_Handler
 };
 
 
 void Rest_Handler (void)
 {
	 
/*copy data from ROM to RAM*/
	unsigned int DATA_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA  ;
	unsigned char* P_src = (unsigned char*)&_E_text ;
	unsigned char* P_dst = (unsigned char*)&_S_DATA ;
	int i ;
	for (i = 0 ; i < DATA_size ; i++)
	{
       /* _S_DATA   HTA5OD       MN     E_text   ely fi el ROM*/
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++ );
	    /*all text data copy to ram */
	}
	
	/*//INIT THE bss with zero*/
	unsigned int bss_size = (unsigned char*)&_E_bss -  (unsigned char*)&_S_bss ;
	P_dst = (unsigned char*)&_S_bss ;
	for (i = 0 ; i < bss_size ;i++){
		*((unsigned char*)P_dst++) = (unsigned char)0 ;
	}
	/*//jump to main */
	main() ;
}