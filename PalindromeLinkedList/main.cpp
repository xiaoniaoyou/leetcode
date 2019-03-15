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
    bool isPalindrome(ListNode* head) {
        if (head == NULL) return true;

        ListNode *ptr = head;
        int length = 0;
        while (ptr != NULL) {
            ++ length;
            ptr = ptr->next;
        }

        int arr[length];
        ptr = head;
        int i = 0;
        while (ptr != NULL) {
            arr[i] = ptr->val;
            ptr = ptr->next;
            ++ i;
        }

        for (int i = 0; i < length; ++i) {
            if (arr[i] != arr[length - i - 1]) {
                return false;
            }
        }

        return true;

    }
};

//class Solution {
//public:
//    void deleteNode(ListNode* node) {
//        ListNode* ptr = node;
//        ListNode* tail;
//        while (ptr->next != NULL) {
//            ptr->val = ptr->next->val;
//            tail = ptr;
//            ptr = ptr->next;
//        }
//
//        tail->next = NULL;
//    }
//};

void printList(ListNode *head) {
    while (head != NULL) {
        cout << "-->" << head->val << endl;
        head = head->next;
    }

}


class SolutionM {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL) {
            cout << "slow=" << slow->val << endl;
            cout << "fast=" << fast->val << endl;
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    ListNode *testPtr, *head;
    vector<int> data = {1, 2, 3, 4, 5, 6};


    head = new ListNode(data[0]);
    testPtr = head;
    for (int i = 1; i < data.size(); ++i) {
        testPtr->next = new ListNode(data[i]);
        testPtr = testPtr->next;
    }

    Solution a;
    cout << a.isPalindrome(head) << endl;

//    SolutionDelete b;
//    cout << b.deleteNode()

    SolutionM c;
    printList(c.middleNode(head));
//    printList(head);


    return 0;
}