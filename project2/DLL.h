/*out line
    surha->as node for PL[PL]
    node->as node for PLM[PLM]
*/

/*
    add to specific locatioin
    remove from specific locatioin
    destractor [it will customize to fit each BLM and BL]
    in our business we need to deal with names not index
    node will be configerd to achive our prog cases[only in data]
    full modify to fit prog
*/


#include <iostream>
using namespace std;

template <typename T>
class DNode {
public:
    T value;
    DNode* next;
    DNode* prev;

    DNode() {
        this->value = T();
        this->prev = nullptr;
        this->next = nullptr;
    }

    DNode(T value, DNode* next, DNode* prev) {
        this->value = value;
        this->next = next;
        this->prev = prev;
    }
};

template <typename T>
class DLL {
private:
    DNode<T>* head;
    DNode<T>* tail;
public:
    DLL() {
        head = tail = nullptr;
    }

    void addToFirst(T value) {
        DNode<T>* n = new DNode<T>(value, head, nullptr);
        if (head == nullptr)
            head = tail = n;
        else {
            head->prev = n;
            head = n;
        }
    }

    void addToLast(T value) {
        DNode<T>* n = new DNode<T>(value, nullptr, tail);
        if (head == nullptr)
            head = tail = n;
        else {
            tail->next = n;
            tail = n;
        }
    }

    void removeFromFirst() {
        if (head == nullptr) return;
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        }
        else {
            head = head->next;
            delete head->prev;
            head->prev = nullptr;
        }
    }

    void removeFromLast() {
        if (head == nullptr) return;
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        }
        else {
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
    }

    void print() {
        DNode<T>* p = head;
        while (p != nullptr) {
            cout << p->value << " -> ";
            p = p->next;
        }
    }
};
