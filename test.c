#include <avr/io.h>
#include "PWM.h"

#include <util/delay.h>



  int main(void)
  //
  {
	pwm_init();
		int x;							
	 
	while (1) 
	{
	
//	set_pwm(0,20,99,100);
		for(x=0;x<99;x++)
		  {
			set_pwm(0,0,x,100);
			_delay_ms(100);  
		  }
		
		for(x=99;x>0;x--)
		  {
			set_pwm(0,0,x,100);
			_delay_ms(100);    
		  }
	
	}
	
	
  }

