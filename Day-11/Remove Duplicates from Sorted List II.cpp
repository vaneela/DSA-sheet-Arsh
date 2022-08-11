class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>mp;
        ListNode*temp =head;
        while(temp){
            mp[temp->val]++;
            temp=temp->next;
        }
        temp =head;
        
        int f = 0;
        for(auto ele : mp){
            if(ele.second==1){
                if(!f && temp ==head){
                    ListNode* newt = new ListNode(ele.first);
                    temp=newt;
                    head = temp;
                    f =1;
                }
                else{
                    ListNode* newt = new ListNode(ele.first);
                    temp->next = newt;
                    temp = temp->next;
                }
                
            }
        }
        if( head && temp==head && head->next)
            return NULL;
        return head;
    }
};