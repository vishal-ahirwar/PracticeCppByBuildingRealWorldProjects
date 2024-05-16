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
private:
	bool is_dip(const double&prev,const double&current)const;
	bool is_spikes(const double& prev, const double& current)const;
};
void read_sensor_data(SensorData&,int);
#endif