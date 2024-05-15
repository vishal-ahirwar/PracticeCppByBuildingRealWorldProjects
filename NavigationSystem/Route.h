#ifndef _ROUTE_H
#define _ROUTE_H
#include<list>
#include<string>
class Route
{
private:
	std::list<std::string>route{};
	std::list<std::string>::iterator current{};
public:
	Route();
	void add_stop(const std::string& new_stop);
	void next_stop();
	void prev_stop();
	void current_stop();
};

#endif