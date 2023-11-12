
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
        ListNode *tmp1, *tmp2;
        tmp1 = l1;
        tmp2 = l2;
        int rest = 0;
        ListNode *listNode = new ListNode();
        ListNode *tmp3 = listNode;
        bool first = true;
        while (tmp1 != nullptr || tmp2 != nullptr)
        {
            if (tmp1 == nullptr || tmp2 == nullptr)
                break;

            int num = tmp1->val + tmp2->val + tmp3->val;

            if (num > 9)
            {

                tmp3->val = num % 10;

                rest = num / 10;
                tmp3->next = new ListNode(rest);
                tmp3 = tmp3->next;

                tmp1 = tmp1->next;
                tmp2 = tmp2->next;
                first = false;
                continue;
            }
            else
            {
                tmp3->val = num;
                first = true;
            }

            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
            if (tmp1 != nullptr && tmp2 != nullptr)
            {
                tmp3->next = new ListNode();
                tmp3 = tmp3->next;
            }
        }

        while (tmp1 != nullptr)
        {
            int num = tmp1->val + tmp3->val;
            if (!first && num > 9)
            {
                tmp3->val = num % 10;

                rest = num / 10;
                tmp3->next = new ListNode(rest);
                tmp3 = tmp3->next;

                tmp1 = tmp1->next;
                continue;
            }

            tmp3->val = num;

            tmp1 = tmp1->next;
            if (tmp1 != nullptr)
            {
                tmp3->next = new ListNode();
                tmp3 = tmp3->next;
            }
        }

        while (tmp2 != nullptr)
        {
            int num = tmp2->val + tmp3->val;
            if (!first && num > 9)
            {
                tmp3->val = num % 10;

                rest = num / 10;
                tmp3->next = new ListNode(rest);
                tmp3 = tmp3->next;

                tmp2 = tmp2->next;
                continue;
            }

            tmp3->val = num;

            tmp2 = tmp2->next;
            if (tmp2 != nullptr)
            {
                tmp3->next = new ListNode();
                tmp3 = tmp3->next;
            }
        }

        return listNode;
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