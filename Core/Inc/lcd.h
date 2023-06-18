#ifndef INC_LCD_DRIVER_H_
#define INC_LCD_DRIVER_H_
#include "main.h"

#define DATA7	(15U)
#define DATA6	(14U)
#define DATA5	(13U)
#define DATA4	(12U)
#define RS		(2U)
#define ENABLE	(1U)


#define ENABLE_DATA()			GPIOB->ODR |= 1<<ENABLE; \
								halt_us(200);\
								GPIOB->ODR &= ~(1<<ENABLE);

void halt_us(uint32_t time);

void lcd_write(char *s);
void send_command_to_lcd(uint8_t command);
void lcd_init(void);
void lcd_string(char *string);

#define NOP_US __asm(  			\
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
			"nop\n"             \
);

#endif /* INC_LCD_DRIVER_H_ */
