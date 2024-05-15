#include"CallCenter.h"
#include<iostream>
int main()
{
	CallCenter call_center;
	add_calls(call_center,2,1);
	process_calls(call_center,2);
	call_center.process_call()==-1?std::cout<<"No calls left to attend!\n":std::cout<<"Done\n";
	call_center.recieve_call(rand() % 10000 + 1);
	call_center.process_call() == -1 ? std::cout << "No calls left to attend!\n" : std::cout << "Done\n";
	return 0;
};