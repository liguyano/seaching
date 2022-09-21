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
    int mid =(0+size)/2;
    auto n=new node<T>;
    cout<<mid<<","<<size<<endl;
    auto nl=new T[mid-1];
    auto nr=new T[size-mid];
    switch (size) {
        case 1:
            n->value=s[0];
            break;
        case 2:
            add_right(n,s[1]);
            break;
        default:
            n->value=s[mid];
            for (int i = 0; i < mid-1; ++i) {
                nl[i]=s[i];
            }
            n->left=halfTree(nl,mid-1);
            n->right=halfTree(nr,size-mid);
            break;
    }
    return n;
}