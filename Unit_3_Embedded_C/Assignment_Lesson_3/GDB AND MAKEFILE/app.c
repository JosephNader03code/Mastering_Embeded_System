#include "uart.h"

unsigned char string_buffer [100] = " Learn In Depth : << Joseph Nader Sophy >> ";
unsigned char const string_buffer_2[100] = "to create ro data section";
unsigned char const string_buffer_3[100] = "to create ro data section";

void main(void)
{
uart_send_string(string_buffer);
}
