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
	if (data.size() < 2)return;
	std::list<double>::iterator prev = data.begin();
	std::list<double>::iterator current = prev;
	++current;
	while (current!=data.end())
	{
		if (is_dip(*prev, *current) || is_spikes(*prev, *current))
		{
			*current = *prev;
		};
		++prev;
		++current;
	}
};
void read_sensor_data(SensorData&sensor_data,int n)
{

	for (int i = 0; i < n; ++i) {
		std::cout << ">>";
		double temp{};
		std::cin >> temp;
		sensor_data.read_data(temp);
	}
}
bool SensorData::is_dip(const double& prev, const double& current)const
{
	return current>=(prev * 2);
};

bool SensorData::is_spikes(const double& prev, const double& current)const
{
	return current<=(prev * 0.5);
}