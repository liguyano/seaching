#include <iostream>
#include "halSeach.h"
#include "halSeach.tpp"
int main() {
    auto list=new int[6]{1,6,9,45,99,100};
    auto result= Half::search(list,6,1);

    switch(result) {
        case -2:
            cout<<"failed to search"<<endl;
            break;
        default:
            cout<<"is "<<result<<endl;break;
    }
cout<<Half::search(list,6,10)<<endl;
cout<<Half::search(list,6,100)<<endl;
cout<<Half::search(list,6,101)<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
