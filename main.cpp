#include <iostream>
#include "halSeach.h"
#include "halSeach.tpp"
int main() {

    auto list = new int[7]{1,6,9,45,99,100,101};
    auto list2 = new char [6]{'1','2','3','5','6','7'};
    auto result= Half::search(list,6,1);

    switch(result) {
        case -2:
            cout<<"failed to search"<<endl;
            break;
        default:
            cout<<"is "<<result<<endl;break;
    }
cout<<Half::search(list,7,10)<<endl;
cout<<Half::search(list,7,100)<<endl;
cout<<Half::search(list,7,101)<<endl;
    std::cout << "Hello, World!" << std::endl;
    auto re=Half::halfTree(list,7);
    floorOrder(re);
    //sdd
    return 0;
}
