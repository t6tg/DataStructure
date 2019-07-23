#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int money = 250;
string message = "My home is small";
char character = 'a';
bool checker = true;
float point = 10.59;
int main()
{
    cout << money << " " << message << " " << character << " " << checker << " " << point << endl;
    money = 300; message = "Bye" ; character = 'K' ; checker = false ; point = 550.44;
    cout << money << " " << message << " " << character << " " << checker << " " << point << endl;
    cin>>money ; cin>>message ; cin>>character ; cin>>checker ; cin>>point;
    cout << money << " " << message << " " << character << " " << checker << " " << point << endl;
    return 0;
}