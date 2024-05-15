// ClassStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define BY_NAME 0
#define BY_AGE 1

class User;
using ArrayOfUsers = User(*)();
class User
{
private:
    std::string user_name{};
    uint16_t user_age{};
public:
    auto getAge()const { return this->user_age; };
    auto getName()const { return this->user_name; };
    void setName(const std::string& str)
    {
        user_name = str;
    };
    void setAge(uint16_t age)
    {
        user_age = age;
    };
};
void PrintUsers(ArrayOfUsers* users)
{
    for (int i = 0; i < 5; ++i)
    {
        if (users[i] != nullptr)
        {
            std::cout<<"\nName : "<<users[i]().getName();
            std::cout<<"\nAge : "<<users[i]().getAge();
        }
    }
}
User getUserByName()
{
    User temp;
    temp.setName("steven");
    temp.setAge(45);
    return temp;
}
User getUserByAge()
{
    User temp;
    temp.setName("kai");
    temp.setAge(5);
    return temp;
}
int main()
{
    ArrayOfUsers temp_user[5] = {};
    temp_user[BY_NAME] = getUserByName;
    temp_user[BY_AGE] = getUserByAge;
    PrintUsers(temp_user);
    return 0;
}
