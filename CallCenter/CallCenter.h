#ifndef _CALL_CENTER_H
#define _CALL_CENTER_H
#include<queue>
class CallCenter
{
private:
	std::queue<int>calls{};
public:
	CallCenter();
	void recieve_call(const int& call_id);
	int process_call();
	bool is_empty()const;
};
void add_calls(CallCenter&,int,int);
void process_calls(CallCenter&,int);
#endif

