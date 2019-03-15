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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return NULL;
        if (headA == headB) return headA;
        ListNode *aPtr, *bPtr;
        aPtr = headA;
        bPtr = headB;

        for (; aPtr != NULL; aPtr = aPtr->next) {
            for (bPtr = headB; bPtr != NULL; bPtr = bPtr->next) {
                if (aPtr == bPtr ) {
                    return aPtr;
                }

            }
        }

        return NULL;
    }
};
void printList(ListNode *ptr) {
    while (ptr != NULL) {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }
    cout << "--->end\n";
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    ListNode *testPtr, *head;
    vector<int> data = {3};

    head = new ListNode(data[0]);
    testPtr = head;
    for (int i = 1; i < data.size(); ++i) {
        testPtr->next = new ListNode(data[i]);
        testPtr = testPtr->next;
    }

//    printList(head);


    vector<int> data2 = {2, 3};
    ListNode *secondTestPtr, *head2;
    head2 = new ListNode(data2[0]);
    secondTestPtr = head2;
    for (int i = 1; i < data2.size(); ++i) {
        secondTestPtr->next = new ListNode(data2[i]);
        secondTestPtr = secondTestPtr->next;
    }

//    printList(head2);

    Solution a;
    ListNode *result;
    result = a.getIntersectionNode(head, secondTestPtr);
    printList(result);






    return 0;
}