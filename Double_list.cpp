#include "Double_list.h"
#include <iostream>
using namespace std;

template <typename Type>
Double_list<Type>::Double_list(){
    this->list_head = NULL;
    this->list_tail = NULL;
    this->list_size = 0;
}

/****** 1 *****/
template <typename Type>
Double_list<Type>::Double_list(const Double_list<Type> &dl){
    
}

template <typename Type>
int Double_list<Type>::size() const{
    return list_size;
}

template <typename Type>
bool Double_list<Type>::empty() const{
    return list_size==0;
}

template <typename Type>
Type Double_list<Type>::front() const{
    return this->list_head->getData();
}

template <typename Type>
Type Double_list<Type>::back() const{
    
    return this->list_tail->getData();
}

template <typename Type>
Double_node<Type>* Double_list<Type>::head(){
    return list_head;
}

template <typename Type>
Double_node<Type>* Double_list<Type>::tail(){
    return list_tail;
}

/****** 2 *****/
template <typename Type>
int Double_list<Type>::count(const Type obj) const{

}


/****** 3 *****/
template <typename Type>
void Double_list<Type>::swap(const Double_list list){

}


/****** 4 *****/
// not sure
template <typename Type>
Type& Double_list<Type>::operator=(const Double_list &rhs){
    return *this;
}


/****** 5 *****/
template <typename Type>
void Double_list<Type>::push_front(const Type obj){
    
}


/****** 6 *****/
template <typename Type>
void Double_list<Type>::push_back(const Type obj){
    
}

/****** 7 *****/
template <typename Type>
Type Double_list<Type>::pop_front(){
    
}

/****** 8 *****/
template <typename Type>
Type Double_list<Type>::pop_back(){
    
}


/****** 9 *****/
template <typename Type>
int Double_list<Type>::erase(const Type obj){

}

template <typename Type>
Double_list<Type>::~Double_list(){
    while(list_head != NULL){
        Double_node<Type> *current = list_head;
        list_head = list_head->getNext();
        delete current;
    }
}

/* Testing */
// template <typename Type>
// void Double_list<Type>::add(Type obj){
//     Double_node<Type> *temp = new Double_node<Type>(obj);
//     if(list_head == NULL){
//         list_head = temp;
//         list_tail = temp;
//         list_size++;
//     }else{
//         list_head->setPrev(temp);
//         temp->setNext(list_head);
//         list_head = temp;
//         list_size++;
//     }
// }



