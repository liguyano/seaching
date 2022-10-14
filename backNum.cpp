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
string to2(int num)
{
    if (num<10)
        return "0"+ to_string(num);
    else
        return to_string(num);
}
void backNum(string a)
{
    auto centry = stoi(a.substr(0, 2));
    auto reCen = reverse(centry);
    auto year = stoi(a.substr(2, 2));
    auto reYear = reverse(year);
    auto mouth = stoi(a.substr(4, 2));
    auto day = stoi(a.substr(6, 2));
    if (reYear <= 12) {
        if (mouth < reYear)//in same year
            cout << a.substr(0, 4) << a.substr(3, 1) << a.substr(2, 1) << a.substr(1, 1) << a.substr(0, 1) << endl;
        else if (mouth == reYear && day <= reCen)
            cout << a.substr(0, 4) << a.substr(3, 1) << a.substr(2, 1) << a.substr(1, 1) << a.substr(0, 1) << endl;
        else {
            cout << a.substr(0, 2);
        }
    } else
    {
        if (reCen>31)// the gewei of centry number > 3
        {
            cout<<(centry/10)+1<<"001100"<<(centry/10)+1<<endl;
        }else
        {
            cout<<centry<<(year/10)+1<<"00"<<(year/10)+1<<to2(reCen);
        }
    }

}
int main() {
    cout << to2(reverse(20)) << endl;
    string a;
    cin >> a;
    backNum(a);
    return 0;
}