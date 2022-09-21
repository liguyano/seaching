//
// Created by kurum on 2022/04/05.
//
#include <iostream>
using namespace std;

template<typename T>
struct chainNode{chainNode<T>* next=NULL;T value=NULL;};

template<typename T>
void add_head(T value,chainNode<T>** head=NULL)
{
    auto a=new chainNode<T>;
    a->value=value;
    a->next=*head;
    *head=a;
}

template<typename T>
T head_pop(chainNode<T>* *head)
{auto a=*head;
        T b=a->value;
        *head= a->next;
        free(a);
        return b;
}
    template<typename T>
    chainNode<T>* add_head(chainNode<T>* head,T value) {
        if (head->value==NULL)
        {
            head->value=value;
            return head;
        }else
        {
        auto a=head;
        head=new chainNode<T>;
        head->value=value;
        head->next=a;
        return head;
        }
    };
    template<typename T>
    T pop_head(chainNode<T>* head)
    {
        auto result=head->value;

        if (head->next==NULL)
        {
            head->value=NULL;
        } else
        {auto a=head->next;
            head->value=head->next->value;
            head->next=head->next->next;
            free(a);
        }
        return result;
    }

template<typename T>
chainNode<T>* add_rear(chainNode<T>*head,T value)
{
    auto a=head;
    if (head->value==NULL)
    {
        head->value=value;
    } else
    {
        while (a->next!=NULL)
            a=a->next;
        a->next=new chainNode<T>;
        a->next->value=value;
    }
    return head;
}
