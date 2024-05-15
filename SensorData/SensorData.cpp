#include "SensorData.h"

void SensorData::print_data()
{
	for (const double value : data)
	{
		std::cout << value << ", ";
	};
	std::cout << "\n";
};

void SensorData::read_data(double value)
{
	data.push_back(value);
};

void SensorData::smooth_data()
{
	data.sort();
};
void read_sensor_data(SensorData&sensor_data,int n)
{
	for (int i = 0; i < n; ++i) {
		double temp{};
		std::cin >> temp;
		sensor_data.read_data(temp);
	}
}