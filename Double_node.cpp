#include "Double_node.h"

#include <iostream>
using namespace std;

template <typename Type>
Double_node<Type>::Double_node(Type Data){
    this->Data = Data;
    this->next = NULL;
    this->prev = NULL;
}

template <typename Type>
void Double_node<Type>::setNext(Double_node<Type> *next){
    this->next = next;
}

template <typename Type>
Double_node<Type> *Double_node<Type>::getNext() const{
    return this->next;
}

template <typename Type>
void Double_node<Type>::setPrev(Double_node<Type> *prev){
    this->prev = prev;
}

template <typename Type>
Double_node<Type> *Double_node<Type>::getPrev() const{
    return this->prev;
}

template <typename Type>
Type Double_node<Type>::getData() const{
    return this->Data;
}

template <typename Type>
void Double_node<Type>::setData(const Type& Data){
    this->Data = Data;
}

template class Double_node<int>;
template class Double_node<string>;

