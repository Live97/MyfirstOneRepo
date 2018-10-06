#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main()
{
    //constructors构造函数
    string str1(5,'c');
    string str2("Now is the time...");
    string str3(str2,11,4);
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;

    str1.push_back('e');
    str1.insert(2,"vv");
    str1.append("123");
    str1.resize(20,'*');
    cout<<str1<<endl;
}
