#ifndef LSTACK_H
#define LSTACK_H

// #pragma once
#include "Link.h"

template <typename Elem>
class LStack {
private:
    Link<Elem> *top;
    int size;

public:
    //���캯��
    LStack(int sz = 10) {
        top = NULL;
        size = 0;
    }
    //��������
    ~LStack() {
        clear();
    }
    //���ջ
    void clear() {
        if (top != NULL) {
            Link<Elem> *tempElem = top;
            top = top->next;
            delete tempElem;
        }
        size = 0;
    }
    //��ջ
    bool pop(Elem &item) {
        if (size == 0)
        {
            return false;
        }
        Link<Elem> *tempElem = top;
        item = top->element;
        top = top->next;
        delete tempElem;
        size--;
        return true;
    }
    //��ջ
    bool push(Elem &item) {
        top = new Link<Elem>(item, top);
        size++;
        return true;
    }
    //ȡֵ
    bool topValue(Elem &item) {
        if (size == 0)
        {
            return false;
        }
        item = top->element;
        return true;
    }
};

#endif
