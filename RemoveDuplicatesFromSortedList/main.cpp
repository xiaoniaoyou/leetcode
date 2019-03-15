#include <iostream>
#include <vector>

using namespace std;
//  Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL || head->next == NULL) return head;
        ListNode* ptr = head;

        while (ptr->next != NULL) {
            if (ptr->val == ptr->next->val) {
                ptr->next = ptr->next->next;
            } else {
                ptr = ptr->next;
            }
        }

        return head;
    }
};


void printList(ListNode *ptr) {
    while (ptr != NULL) {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution a;

    ListNode *testPtr, *head;
    vector<int> data = {1, 1, 2, 3, 3,  4, 4, 4, 5};

    head = new ListNode(data[0]);
    testPtr = head;
    for (int i = 1; i < data.size(); ++i) {
        testPtr->next = new ListNode(data[i]);
        testPtr = testPtr->next;
    }

    testPtr = head;
    while (testPtr != NULL) {
        cout << testPtr->val << endl;
        testPtr = testPtr->next;
    }


    cout << "------" << endl;
    ListNode *resultPtr = a.deleteDuplicates(head);
    printList(resultPtr);
//    cout << a.deleteDuplicates(head) << endl;





    return 0;
}