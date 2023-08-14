#include <iostream>

//Definition for singly-linked list.
  struct ListNode 
  {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{    
    if (list1 == nullptr)
    {
        return list2;
    }

    if (list2 == nullptr)
    {
        return list1;
    }

    ListNode* Temp = list1;

    if (list1->val > list2->val)
    {
        Temp = list2;
        list2 = list2->next;
    }
    else
    {
        list1 = list1->next;
    }

    ListNode* combinedList = Temp;

    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val < list2->val)
        {
            Temp->next = list1;
            list1 = list1->next;
        }
        else
        {
            Temp->next = list2;
            list2 = list2->next;
        }

        Temp = Temp->next;
    }

    if (list1 == nullptr)
    {
        Temp->next = list2; 
    }

    if (list2 == nullptr)
    {
        Temp->next = list1;
    }

    return combinedList;
}