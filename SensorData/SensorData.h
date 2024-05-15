#ifndef _SENSOR_H
#define _SENSOR_H
#include<iostream>
#include<list>
class SensorData
{
private:
	std::list<double>data{};
public:
	void smooth_data();
	void read_data(double);
	void print_data();

};
void read_sensor_data(SensorData&,int);
#endif