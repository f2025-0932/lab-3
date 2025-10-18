#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    string city;
    
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    
    cout << "Enter your city/country: ";
    getline(cin, city);
    
    cout << "\n** **\n";
    cout << "*** ***\n";
    cout << "**** ****\n";
    cout << "*********\n";
    
    cout << "\nMy name is " << name << ", and I am " << age << " years old.\n";
    cout << "I am from " << city << ".\n";
    
    return 0;
}
