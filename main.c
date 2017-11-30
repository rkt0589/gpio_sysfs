/*
 * main.c
 *
 *  Created on: 30-Nov-2017
 *      Author: dev
 */
#include <stdio.h>                  // standard I/O header file
#include <fcntl.h>                   // for open(), close(), lseek()
#include <sys/stat.h>                // for open()
#include <stdio.h>                   // standard I/O header file
#include <sys/types.h>               // for open()
#include <unistd.h>                  // for write(), open(), read(), usleep()

void export_gpio(int pin)
{
	int fd;
	char buf[1024];

	fd = open("/sys/class/gpio/export", O_WRONLY);
	sprintf(buf, "%d", pin);
	write(fd, buf, strlen(buf));
	close(fd);
}

void set_pin_direction(int pin, int direction)
{
	int fd;
	char buf[1024];

	sprintf(buf, "/sys/class/gpio/gpio%d/direction", pin);
	fd = open(buf, O_WRONLY);

	if(direction == 1)
		write(fd, "out", 3);
	else
		write(fd, "in", 2);

	close(fd);
}

void set_pin_level(int pin, int level)
{
	int fd;
	char buf[1024];

	sprintf(buf, "/sys/class/gpio/gpio%d/value", pin);
	fd = open(buf, O_WRONLY);

	// Set GPIO high status
	if(level == 1)
		write(fd, "1", 1);
	// Set GPIO low status
	else
		write(fd, "0", 1);

	close(fd);
}

int get_pin_level(int pin)
{
	int fd;
	char buf[1024];
	char value;

	sprintf(buf, "/sys/class/gpio/gpio%d/value", pin);

	fd = open(buf, O_RDONLY);

	read(fd, &value, 1);

	if(value == '0')
	{
	     // Current GPIO status low
		return 0;
	}
	else
	{
	     // Current GPIO status high
		return 1;
	}
}
int main(int argc, char **argv)
{
	printf("\nHello World gpio !!!\n");        // print "Hello World" message on screen

	export_gpio(35); // sodimm 133
	set_pin_direction(35, 1);  // 1 for output 0 for input
	while(1)
	{
		set_pin_level(35, 1);
		sleep(1);
		set_pin_level(35, 0);
		sleep(1);
	}
	return(0);
}

