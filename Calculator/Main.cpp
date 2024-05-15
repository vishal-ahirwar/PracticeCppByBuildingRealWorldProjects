// Simple Calculator but complicated code ;)
#include<iostream>

int main(int argc, char* argv[])
{
    std::cout << "Enter Two Values [Integer]\n";
    int values[2] = {};
    int input{};
    for (int i = 0; i < 2; ++i)std::cin >> values[i];
    int(*binary_operations[4])(int, int) = { [](int a,int b){ return a + b; }, [](int a, int b) { return a - b; },[] (int a, int b) { return a * b; }, [](int a, int b) { return b == 0 ? 0 : a / b; } };
    std::cout<<"0.add,1.sub,2.multy,3.divide\n";
    std::cin >> input;
    if (input < 4 && input >= 0) std::cout << binary_operations[input](values[0], values[1]) << "\n";
    else std::cout << "Invalid Input!\n";
    return 0;
}