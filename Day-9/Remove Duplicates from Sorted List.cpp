/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        while (head != NULL)
        {
            ListNode *cur = head->next;
            if (cur == NULL)
                break;
            if (head->val == cur->val)
            {
                head->next = cur->next;
            }
            else
                head = head->next;
        }
        return temp;
    }
};