#include <iostream>
#include <string>
using namespace std;
string hello = "pedro";
string name = "";

int persist;

int main(int argc, char** argv[])
{
    cout << "Hello World" << endl; 

    cout << "What is your name?" << endl;

    cin >> name;

    cout << "Your name is " + name;

    cin >> persist;

    return 0;
}
