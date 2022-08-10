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