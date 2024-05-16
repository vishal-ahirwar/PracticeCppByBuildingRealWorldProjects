#include"SensorData.h"

int main()
{
	SensorData sensor_data;
	read_sensor_data(sensor_data, 4);
	sensor_data.print_data();
	sensor_data.smooth_data();
	sensor_data.print_data();
	return 0;
};
