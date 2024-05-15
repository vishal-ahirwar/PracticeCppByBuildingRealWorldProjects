#ifndef _BROWSER_HISTORY_H
#define _BROWSER_HISTORY_H
#include<iostream>
#include<stack>

#include<string.h>

class BrowserHistory
{
private:
	std::stack<std::string>history {};
public:
	void visit(const std::string& site_url);
	const std::string current()const;
	void back();
};

void browser_history_manager(BrowserHistory& b_history);
#endif
