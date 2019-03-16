#include <iostream>

using namespace std;


/**
 * Definition for singly-linked list.
 * */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode** pp = &head;
        ListNode *a, *b;
        //! pre(*pp), a, b, b->next
        while ((a=*pp) != NULL && (b=a->next) != NULL) {
            a->next = b->next;
            b->next = a;
            *pp = b; //! *pp means pre
            pp = &(a->next);
        }

        return head;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;

    int a = 10;
    int *p = &a;
    int **pp = &p;
    cout << "p=" << p << endl;
    cout << "*p=" << *p << endl;
//    cout << "**p=" << **p << endl;
    cout << "*pp=" << *pp << endl;
    **pp = 20;
    cout << "a=" << a << endl;


    return 0;
}