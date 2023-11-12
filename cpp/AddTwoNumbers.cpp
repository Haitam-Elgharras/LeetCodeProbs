
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// * Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0); // Dummy node to store the result
        ListNode *current = dummy;         // Pointer to the current node in the result

        int carry = 0; // Variable to store the carry-over (remainder)

        while (l1 || l2 || carry)
        {
            // Calculate the sum of current digits and carry-over
            int sum_val = carry;
            if (l1)
            {
                sum_val += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum_val += l2->val;
                l2 = l2->next;
            }

            // Create a new node for the sum digit
            int digit = sum_val % 10;
            carry = sum_val / 10;
            current->next = new ListNode(digit);
            current = current->next;
        }

        return dummy->next; // Return the result linked list starting from the next node of the dummy
    }
};

// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.

int main()
{

    ListNode *l1 = new ListNode(9);
    l1->next = new ListNode(9);
    l1->next->next = new ListNode(1);

    ListNode *l2 = new ListNode(1);

    Solution s;
    ListNode *result = s.addTwoNumbers(l1, l2);

    for (ListNode *p = result; p != nullptr; p = p->next)
    {
        cout << p->val << " ";
    }
}