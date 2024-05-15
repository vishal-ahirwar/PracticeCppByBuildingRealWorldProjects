#include<array>
#include<iostream>
#include<vector>
#include<string>
bool is_prime(int n)
{
	if (n <= 1)return false;
	for (int i = 2; i < n / 2; ++i)
	{
		if (n % i == 0)return false;
	}
	return true;
};

int calculate_sum(int arr[], int size)
{
	int sum{};
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	};
	return sum;
};

void find_prime(int arr[], int size, std::vector<int>& out)
{
	for (int i = 0; i < size; ++i)
	{
		if (is_prime(arr[i]))out.push_back(arr[i]);
	}
};
void print_vector(const std::vector<int>& in)
{
	for (const auto i : in)std::cout << i << ", ";
	std::cout << std::endl;
};

template<typename T>
int find(const T arr[], int size,const T target)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == target)return i;
	}
	return -1;
};

int main()
{
	int arr[]{ 2,5,7,12,-10,-2,-7,13 };
	int arr_size = sizeof arr / sizeof arr[0];
	
	int sum{ calculate_sum(arr,arr_size)};
	std::cout << sum<<std::endl;
	
	std::vector<int>primes{};
	find_prime(arr, arr_size, primes);
	print_vector(primes);

	std::cout << find(arr, arr_size, 12) << std::endl;
	std::string arr_string[]{ "hello","there","world","universe" };
	int arr_string_size = sizeof arr_string / sizeof arr_string[0];
	std::cout << find(arr_string, arr_string_size, std::string("universe")) << std::endl;
	return 0;
}