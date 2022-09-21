//
// Created by kurum on 9/21/2022.
//
#include "pulicinClude.h"
#include "chain.cpp"
template<typename T>
struct node{node* father=NULL;node* left=NULL ;node* right=NULL;T value;};
template<typename T>
void add_left(node<T> * father,T value)
{
    father->left=new node<T>;
    father->left->father=father;
    father->left->value=value;
}
template<typename T>
void add_right(node<T> * father,T value)
{
    father->right=new node<T>;
    father->right->father=father;
    father->right->value=value;
}

template<typename T>
void floorOrder(node<T>* od)
{
    chainNode<node<T>*>* chain1=NULL;
    add_head(od,&chain1);
    node<T>* a= nullptr;
    chainNode<T>* chain2=NULL;
    while (chain1->value || chain1->next)
    {
        a= pop_head(chain1);
        if (a)
        {
            //cout<<a->value<<endl;
            add_head(a->value,&chain2);
            chain1= add_rear(chain1,a->left);
            chain1= add_rear(chain1,a->right);
        }
    }
    while (chain2)
    {
        cout<<head_pop(&chain2)<<endl;
    }
    free(chain1);
    free(chain2);
}
