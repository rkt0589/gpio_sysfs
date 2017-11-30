# Simple GPIO using sysfs in Linux C.

## Export pin as gpio to '/sys/class/gpio/export'

param in: GPIO or Pin number to be exported

### void export_gpio(int pin)  

## Set pin direction as output or Input

param pin: pin/gpio numberr which is exported

param direction: 1 for output  0 for Input
                 
### void set_pin_direction(int pin, int direction) 


## Set pin level to high or low

param pin: pin/gpio numberr which is exported and direction set

param level: 1 logic high 0 logic low
             
### void set_pin_level(int pin, int level)  

## Read Pin level of passed pin/gpio

param pin: pin/gpio numberr which is exported and direction set

return: 1 for logic high 0 logic low
        
### int get_pin_level(int pin)
