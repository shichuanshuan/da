#include "dht11.h"
#include "usart.h"

int main()
{
    SystemInit();
    delay_init();
    usart_config();
    
    while (1)
    {
        u8 buffer[5];
        double hum;
        double temp;
        if (dht11_read_data(buffer) == 0)
        {
            hum = buffer[0] + buffer[1] / 10.0;
            temp = buffer[2] + buffer[3] / 10.0;
        }
              usart_printf("\"temperature\": %.2f, \"humidness\": %.2f", temp, hum);
				usart_printf("\r\n");
				
		  
        delay_ms(2000);
    }
}
