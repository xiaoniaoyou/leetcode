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
    bool hasCycle(ListNode *head) {

        ListNode *fast, *slow;
        slow = head;
        fast = head->next;

        while (fast->next != NULL) {
            cout << "fast=" << fast->val << endl;
            cout << "slow=" << slow->val << endl;
            if (fast->next->next != NULL) {
                fast = fast->next->next;
            } else {
                break;
            }

            slow = slow->next;

            if (fast == slow) {
                return true;
            }
        }

        return false;
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
    vector<int> data = {1, 2, 3,  4, 5};

    head = new ListNode(data[0]);
    testPtr = head;
    for (int i = 1; i < data.size(); ++i) {
        testPtr->next = new ListNode(data[i]);
        testPtr = testPtr->next;
    }
    testPtr->next = head;
//    testPtr = head;
//    while (testPtr != NULL) {
//        cout << testPtr->val << endl;
//        testPtr = testPtr->next;
//    }



    cout << "------" << endl;
//    ListNode *resultPtr = a.deleteDuplicates(head);
//    printList(head);
//    cout << a.deleteDuplicates(head) << endl;


    cout << a.hasCycle(head) << endl;





    return 0;
}