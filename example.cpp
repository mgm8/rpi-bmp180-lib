#include <iostream>
#include <stdlib.h>     // system()
#include <unistd.h>     // sleep()

#include "bmp180.h"

using namespace std;

int main()
{
	BMP180 bar;
	
	while(true)
	{
		system("clear");
		bar.Read();
		cout << "Temperature: " << bar.getTemperature() << " oC" << endl;
		cout << "Pressure: " << bar.getPressure() << " Pa" << endl;
		cout << "Altitude: " << bar.getAltitude() << " m" << endl;
		sleep(1);
	}
	
	return 0;
}
