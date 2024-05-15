#include "Route.h"
#include<iostream>
Route::Route()
{
	current = route.end();
};

void Route::add_stop(const std::string& new_stop)
{
	route.push_back(new_stop);
	if (current == route.end())
	{
		current = route.begin();
	};
};

void Route::next_stop()
{
	if (route.empty())return;
	++current;
	if (current == route.end())current = route.begin();
};

void Route::prev_stop()
{
	if (route.empty())return;
	if (current == route.begin())current = route.end();
	--current;
};

void Route::current_stop()
{
	if (route.empty())return;
	std::cout << "Current stop is " << *current << "\n";
};
