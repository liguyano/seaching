//
// Created by kurum on 9/20/2022.
//

#include "halSeach.h"


template<class T>
int Half::search(T *s, int size, T what) {
    auto left=-1,right=0;
    right=size;
    auto mid=0;
    while (true)
    {
        mid=(left+right)/2;
      //  cout<<format("mid: {},left {},right {}\n",mid,left,right);
        if (abs(left-right)==1)
            return -2;

        if (what<s[mid])
        {
            right=mid;
        }else if (what>s[mid])
        {
            left=mid;
        } else
        {
            return mid;
        }
    }
    return 0;
}