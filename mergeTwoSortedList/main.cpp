#include <iostream>
#include <vector>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {
          
      }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *l1Ptr, *l2Ptr;
        l1Ptr = l1;
        l2Ptr = l2;
        ListNode *l3Ptr, *l3First;
        l3Ptr = new ListNode(0);
        l3First = l3Ptr;

        int l1Length = 0, l2Length = 0;
        while (l1Ptr != NULL) {
            ++ l1Length;
            l1Ptr = l1Ptr->next;
        }

        while (l2Ptr != NULL) {
            ++ l2Length;
            l2Ptr = l2Ptr->next;
        }

        int maxLength = (l1Length > l2Length) ? l1Length : l2Length;
        int  l1Index = 0, l2Index = 0;

        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                l3Ptr->next = new ListNode(l1->val);
                l1 = l1->next;
                l3Ptr = l3Ptr->next;
                ++  l1Index;
            } else {
                l3Ptr->next = new ListNode(l2->val);
                l2 = l2->next;
                l3Ptr = l3Ptr->next;
                ++ l2Index;
            }

        }
            
        if ( l1Index == l1Length) {
            l3Ptr->next = l2;
        } else if (l2Index ==l2Length ) {
            l3Ptr->next = l1;
        }
        
        
        return l3First->next;

    }
};

void printList(ListNode *L) {
    while (L != NULL) {
        cout << L->val << endl;
        L = L->next;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    ListNode *testL1 = new ListNode(1);
    ListNode *testL1Head = testL1;
    testL1->next = new ListNode(2);
    testL1 = testL1->next;
    testL1->next = new ListNode(4);
    testL1 = testL1->next;


    ListNode *testL2 = new ListNode(1);
    ListNode *testL2Head = testL2;
    testL2->next = new ListNode(3);
    testL2 = testL2->next;
    testL2->next = new ListNode(4);
    testL2 = testL2->next;

//    while (testL1Head != NULL) {
//        cout << "L1-->" << testL1Head->val << endl;
//        testL1Head = testL1Head->next;
//    }
//
//    while (testL2Head != NULL) {
//        cout << "L2-->" << testL2Head->val << endl;
//        testL2Head = testL2Head->next;
//    }

    Solution a;
    ListNode *L3 = a.mergeTwoLists(testL1Head, testL2Head);
    printList(L3);

    return 0;
}






















