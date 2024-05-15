#include "CallCenter.h"
#include<iostream>
//#include<random>
#include<time.h>
#include<thread>
#include<chrono>

CallCenter::CallCenter()
{
	srand(time(nullptr));
};
void CallCenter::recieve_call(const int& call_id)
{
	std::cout << call_id << " added to call list\n";
	calls.push(call_id);
};
int CallCenter::process_call()
{
	if (calls.empty())return -1;
	int temp_id{ calls.front() };
	std::cout << "Processing call ID:" << temp_id << "\n";
	calls.pop();
	return temp_id;
};

bool CallCenter::is_empty()const
{
	return calls.empty();
};

void add_calls(CallCenter& call,int n_calls, int delay_in_seconds_per_call)
{
	for (int i = 0; i < n_calls; ++i)
	{
		int id{ rand() % 100000 + 1 };
		call.recieve_call(id);
		std::this_thread::sleep_for(std::chrono::seconds(delay_in_seconds_per_call));
	}
}
void process_calls(CallCenter& call,int delay_in_seconds_per_call)
{
	while (!call.is_empty())
	{
		call.process_call();
		std::this_thread::sleep_for(std::chrono::seconds(delay_in_seconds_per_call));
	};
};
