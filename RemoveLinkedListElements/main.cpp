#include <iostream>
#include <vector>

using namespace std;
//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};



//class Solution {
//public:
//    ListNode* removeElements(ListNode* head, int val) {
//        if (head == NULL) return head;
//
//        ListNode *first, *last, *current;
//        first = head;
//
//        if (first->val == val && first->next == NULL) {
//            return first->next;
//        }
//
//        while (first->val == val && first->next != NULL) {
//            first = first->next;
//        }
//
//        last = head;
//        current = head->next;
//
//        while (current->next != NULL) {
//            if (current->val == val) {
//                last->next = current->next;
//                current = current->next;
//            } else {
//                last = current;
//                current = current->next;
//            }
//        }
//
//        //! If last node is match, then
//        cout << last->val << endl;
//        cout << current->val << endl;
//        if (current->val == val) {
//            last->next = current->next;
//        }
//
//        return first;
//    }
//};


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return head;

        ListNode *first, *last, *current;
        first = head;
        current = head;

        //! Make sure the first element does not start with val.
        while (first->val == val) {
            first = first->next;
            if (first == NULL) {
                return NULL;
            }
        }

        cout << ">>>>\n";
        cout << first->val << endl;

        last = head;
        current = head->next;
        while (current != NULL) {
            if (current->val == val) {
                last->next = current->next;
                current = current->next;
            } else {
                last = current;
                current = current->next;
            }
            if (current == NULL || current->next == NULL) {
                break;
            }
        }


//        cout << last->val << endl;
//        cout << current->val << endl;
        if ( current != NULL && current->val == val) {
            last->next = current->next;
        }

        return first;
    }
};

void printList(ListNode *ptr) {
    while (ptr != NULL) {
        cout << "--->" << ptr->val << endl;
        ptr = ptr->next;
    }
    cout << "--->end\n";
}


class SolutionReverse {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        ListNode *ptr, *cur, *after;
        ptr = head;
        cur = head->next;
        ptr->next = NULL;
        while (cur != NULL) {
            cout << "++" << cur->val << endl;
            after = cur->next;
            cur->next = ptr;
            ptr = cur;
            cur = after;
        }

        return ptr;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;


    ListNode *testPtr, *head;
    vector<int> data = {1, 2, 6, 3, 4, 5, 6};
    int deleteNum = 2;
//    vector<int> data = {1, 1};

    head = new ListNode(data[0]);
    testPtr = head;
    for (int i = 1; i < data.size(); ++i) {
        testPtr->next = new ListNode(data[i]);
        testPtr = testPtr->next;
    }

//    printList(head);


//    Solution a;
//    ListNode *result = a.removeElements(head, deleteNum);
//    printList(result);

    SolutionReverse b;
    ListNode *resultReseve = b.reverseList(head);
    printList(resultReseve);


    return 0;
}