#include <iostream>
#include <vector>

using namespace std;




class MyLinkedList {
public:
    /** Initialize your data structure here. */
    MyLinkedList() {

    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index < 0 || index >= mLength) {
            return -1;
        }
        ListNode *tPtr = mHead;
        for (int i = 0; i < index; ++i) {
            tPtr = tPtr->next;
        }
        return tPtr->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if (mLength == 0) {
            mHead = new ListNode(val);
            mTail = mHead;
            ++ mLength;
            return;
        }

        ListNode *tPtr = new ListNode(val);
        tPtr->next = mHead;
        mHead->prev = tPtr;
        mHead = tPtr;
        ++ mLength;

    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if (mLength == 0) {
            addAtHead(val);
            return;
        }

        ListNode *tPtr = new ListNode(val);
        mTail->next = tPtr;
        tPtr->prev = mTail;
        mTail = tPtr;
        ++ mLength;

    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (index < 0 || index > mLength) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == mLength) {
            addAtTail(val);
            return;
        }

        ListNode *tPtr = new ListNode(val);

        ListNode *tLocate = mHead;
        int i = 0;
        while (tLocate->next != NULL) {
            ++ i;
            if (i == index) {
                break;
            }

            tLocate = tLocate->next;
        }

//        cout << "tLocate.val=" << tLocate->val << endl;
        tPtr->next = tLocate->next;
        tPtr->prev = tLocate;
        tLocate->next = tPtr;
        tPtr->next->prev = tPtr;

        ++ mLength;

    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (index < 0 || index >= mLength) return;

        ListNode *tLocate = mHead;
        int i = 0;
        while (tLocate->next != NULL) {
            if (i == index) {
                break;
            }
            ++ i;
            tLocate = tLocate->next;
        }

//        cout << "deleteAtIndex, tLocate.val=" << tLocate->val << endl;
//        cout << "deleteAtIndex, tLocate.prev.val=" << tLocate->prev->val << endl;
        -- mLength;
        //!　Delete head node
        if (tLocate == mHead) {
            if (mHead->next != NULL) {
                mHead->next->prev = NULL;
                mHead = mHead->next;
            } else {
                mHead = NULL;
                mHead->prev = NULL;
                mHead->next = NULL;
            }
            return;
        }


        if (tLocate == mTail) {
            mTail->prev->next = NULL;
            mTail = mTail->prev;
            return;
        }

        if (tLocate->prev != NULL) {
            tLocate->prev->next = tLocate->next;
        }
        if (tLocate->next != NULL) {
            tLocate->next->prev = tLocate->prev;
        }


    }

    void printList() {
//        cout << "---->start\n";
        cout << "mLength=" << mLength << endl;
        ListNode *tPtr = mHead;
        while (tPtr) {
            cout << "-->" << tPtr->val << endl;
            tPtr = tPtr->next;
        }
//        cout << "---->end\n";
    }

    void printListReverse() {
//        cout << "---->start\n";
        ListNode *tPtr = mTail;
        while (tPtr) {
            cout << ">>" << tPtr->val << endl;
            tPtr = tPtr->prev;
        }
//        cout << "---->end\n";
    }

private:
    int mLength = 0;
    struct ListNode {
        int val;
        ListNode *prev;
        ListNode *next;
        ListNode(int x) : val(x), prev(NULL), next(NULL) {}
    };
    ListNode *mHead = NULL;
    ListNode *mTail = NULL;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */



int main() {
    std::cout << "Hello, World!" << std::endl;

    MyLinkedList linkedList =  MyLinkedList();
    linkedList.addAtHead(1);
//    linkedList.addAtTail(3);
    linkedList.addAtIndex(1, 2);  // linked list becomes 1->2->3
    cout << "get=" << linkedList.get(1) << endl;     // returns 2
//    linkedList.deleteAtIndex(1);  // now the linked list is 1->3
    cout << "get=" << linkedList.get(0) << endl;     // returns 2
    cout << "get=" << linkedList.get(2) << endl;

//    linkedList.deleteAtIndex(2);  // now the linked list is 1->3
//    cout << linkedList.get(1) << endl;

    linkedList.addAtTail(13);
    linkedList.addAtTail(14);
//    linkedList.addAtTail(15);
//    linkedList.addAtTail(16);


    linkedList.deleteAtIndex(3);


    linkedList.printList();
    linkedList.printListReverse();



    return 0;
}