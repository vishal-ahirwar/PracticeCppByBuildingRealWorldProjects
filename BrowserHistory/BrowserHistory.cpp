#include "BrowserHistory.h"
#include<chrono>
#include<thread>

void BrowserHistory::visit(const std::string& site_url)
{
	std::cout << "Visiting " << site_url << "\r";
	history.push(site_url);
};

const std::string BrowserHistory::current()const
{
	if (history.empty())
	{
		return std::string("Empty!\r");
	}
	else {
		return "Current site "+history.top()+"\r";
	}
};

void BrowserHistory::back()
{
	std::cout << "Navigating back\r";
	if(!history.empty())
	history.pop();
};
void browser_history_manager(BrowserHistory& b_history)
{
	b_history.visit("www.google.com");
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.visit("www.youtube.com");
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.visit("www.animesuge.com");
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.visit("www.github.com");
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << b_history.current();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.back();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << b_history.current();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.visit("www.animesuge.com");
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << b_history.current();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.back();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << b_history.current();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.back();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << b_history.current();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.back();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << b_history.current() << "\r";
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.back();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << b_history.current() << "\r";
	std::this_thread::sleep_for(std::chrono::seconds(2));
	b_history.back();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << b_history.current() << "\r";
	std::this_thread::sleep_for(std::chrono::seconds(2));
}