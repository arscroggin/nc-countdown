// C++ program that counts down to a certain data
 
#include <iostream>
#include <chrono>
#include <ctime>
#include <format>

using namespace std;
 
///////////////////////////////////////////////////////
//
// main
//
///////////////////////////////////////////////////////
int main()
{
    // Prints hello world
    cout << "Hello World\n";

    auto now = std::chrono::system_clock::now();
    std::string nowTimeString = std::format("{:%F %T}", now);

    cout << nowTimeString;
 
    return 0;
}




