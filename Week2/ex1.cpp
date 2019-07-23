#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int *pointer;
    int value = 20;
    cout << pointer << endl; // int   //0x10f75a036
    cout << &pointer << endl; // int  //0x7ffee3149998

    cout << value  << endl; //int //20
    cout << &value  << endl; //int //0x7ffee3149994

    pointer = &value; //adress
    cout << *pointer  << endl; //int // 20
    cout << pointer << endl; //int //0x7ffee3149994
    cout << &pointer << endl; //int //0x7ffee3149994

    cout << value  << endl; //int //20
    cout << &value  << endl; //int //0x7ffee3149998

    *pointer = 30; // set in pointer value 30
    cout <<  *pointer  << endl; //int //30
    cout << value << endl; //int //30

    value = 50; // set variable value = 30
    cout << *pointer << endl; //50
    cout << value << endl; //50

}