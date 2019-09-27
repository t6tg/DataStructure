#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

class Stack
{
public:
    vector<string> v;
    int size = 0;
    int t_size = 0;
    void Push(string data)
    {
        if(
    }
    //-------------------------------------------------------------
    void Pop()
    {
        //insert Your code
    }
    //-------------------------------------------------------------
    void Print()
    {
        //insert Your code
    }
    //-------------------------------------------------------------
};
int main()
{
    Stack s;
    string t;
    string t1;
    int size;
    cin>>size;
    s.size = size;
    while(true)
    {
        cin>>t;
        if(t=="e")
        {
            cin>>t1;
            s.Push(t1);
        }
        else if(t=="d")
        {
            s.Pop();
        }
        else if(t=="p")
        {
            s.Print();
        }
        else if(t=="n")
        {
            cout<<s.v.size()<<endl;
        }
        else if(t=="x")
        {
            break;
        }
    }
    return 0;
}
