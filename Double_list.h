#ifndef DOUBLE_LIST
#define DOUBLE_LIST

#include "Double_node.h"

template <typename Type>
class Double_list{
    private: 
        Double_node<Type> *list_head;
        Double_node<Type> *list_tail;
        int list_size;
    public:
        Double_list();
        Double_list(const Double_list <Type> &);
        int size() const;
        bool empty() const;
        Type front() const;
        Type back() const;
        Double_node<Type> *head();
        Double_node<Type> *tail();
        int count(const Type) const;
        void swap(const Double_list);
        Type &operator=(const Double_list&);
        void push_front(const Type);
        void push_back(const Type);
        Type pop_front();
        Type pop_back();
        int erase(const Type);
        ~Double_list();
        /* Testing */
        void add(const Type);

        /* */
};

#endif