#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
           std::string  mainStr;
           std::string  toErase;
           cin>>mainStr;
           toErase="WUB";
           size_t pos = std::string::npos;
    // Search for the substring in string in a loop untill nothing is found
    while ((pos  = mainStr.find(toErase) )!= std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
        mainStr.insert(pos," ");
    }
    cout<<mainStr<<endl;
    return 0;
}
