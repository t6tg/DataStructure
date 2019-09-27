#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
vector <int>v;

void sort()
{
    for(int i=0 ; i < v.size() ; i++)
    {
        for (int j = i ; j < v.size()  ; j++)
        {
            if( v[i] > v[j] )
            {
                int t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }
}

int mv = 0;
void b_s(int value,int left,int right)
{
    int mid = (right + left ) /2;
    if(v[mid] == value){
        cout << v[mid] << " ";
        mv = 1;
        return;
    }
    else if(right <= left){
        cout << v[mid] << " ";
        return;
    }
    else if(v[mid] < value){
        cout << v[mid] << " ";
        b_s(value,mid+1,right);
    }
    else if(v[mid] > value){
        cout << v[mid] << " ";
        b_s(value,left,mid-1);
    }
}

void bs(int value)
{
    if( !v.empty() )
    {
        mv = 0;
        int min = 0;
        int max = v.size()-1;
        sort();
        b_s(value,min,max);
        if(mv == 1){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }
    }
}

int main()
{
    string s;
    int    n;
    while(true)
    {
        cin>>s;
        if(s == "e")
        {
            break;
        }
        else if(s == "s")
        {
            cin>>n;
            bs(n);
        }
        else
        {
            const char * c = s.c_str();
            int t = atoi(c);
            v.push_back(t);
        }
    }
    return 0;
}
