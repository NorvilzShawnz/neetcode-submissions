# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        newHead = ListNode()
        curr = newHead

        # While they're both not at null
        while list1 and list2:
            #If the value in list 1 is less than the value at list 2
            #add 1 to the merged array then progress 1
            if list1.val < list2.val:
                curr.next = list1
                list1 = list1.next
            #if list2 val is less than 1 
            else:
                curr.next = list2
                list2 = list2.next
            #always move node so it doesn't get overwritten
            curr = curr.next
        
        curr.next = list1 if list1 else list2
        return newHead.next
