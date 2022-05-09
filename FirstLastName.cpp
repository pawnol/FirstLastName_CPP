/*
Split First and Last Name
Pawelski
5/8/2022
Please follow the instructions on the activity guide!
*/

#include <iostream>
#include <string>

int main()
{
    std::string full_name, first_name, last_name;
    int split;
    std::cout << "Enter your full name >> ";
    std::cin.clear();
    std::getline(std::cin, full_name);
    split = full_name.find(' ');
    first_name = full_name.substr(0, split);
    last_name = full_name.substr(split + 1);
    std::cout << "Your first name is " << first_name << ".\n";
    std::cout << "Your last name is " << last_name << ".\n\n";
    return 0;
}
