#include<iostream>
#include<stack>

#include<string.h>

std::string reverse_string(const std::string& str)
{
	std::stack<char>char_stack{};
	std::string reversed_string{};
	for (const auto c : str)char_stack.push(c);
	while (!char_stack.empty())[&]() {reversed_string += char_stack.top(); char_stack.pop(); }();
	return reversed_string;
}
int main()
{
	std::string hello_world{ "hello, world" };
	std::cout << reverse_string(hello_world) << std::endl;
	return 0;
}