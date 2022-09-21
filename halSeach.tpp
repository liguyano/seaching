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
            right=mid;
        else if (what>s[mid])
            left=mid;
        else
            return mid;
    }
    return 0;
}

template<class T>
node<T>* Half::halfTree(T *s, int size) {
    int mid =(size)/2;
    auto n=new node<T>;
    cout<<mid<<","<<size<<endl;

    switch (size) {

        case 1:
            n->value=s[0];
            break;
        case 2:
            n->value=s[0];
            add_right(n,s[1]);
            break;
        case 3:
            n->value=s[1];
            add_left(n,s[0]);
            add_right(n,s[2]);
            break;
        default:
            n->value=s[mid];
            n->left=halfTree(s,mid);
            n->right=halfTree(s+mid,size-mid-1);
            break;
    }
    return n;
}