//
// Created by kurum on 9/25/2022.
//
#include <iostream>
#include <string>

using namespace std;
int reverse(int num)
{
    return num/10+num%10*10;
}
int main()
{
    string a;
    cin>>a;
    auto centry= stoi(a.substr(0,2));
    auto reCen= reverse(centry);
    auto year= stoi(a.substr(2,2));
    auto reYear= reverse(year);
    auto mouth= stoi(a.substr(4,2));
    auto day= stoi(a.substr(6,2));
    if (reYear<12){
        if (mouth<reYear)
        {
            cout<<reYear-mouth<<" mounth "<<endl;
            cout<<31-day+reCen<<endl;
        }
    }
    return 0;
}