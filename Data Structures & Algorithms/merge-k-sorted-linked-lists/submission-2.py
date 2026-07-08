# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:    
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if not lists:
            return None
        
        first = lists[0]

        for i in range(1, len(lists)):
            first = self.merge(first, lists[i])
        
        return first


    def merge(self, list1, list2):
        res = ListNode()
        curr = res

        while list1 and list2:
            if (list1.val < list2.val) or list1.val == list2.val:
                curr.next = list1
                list1 = list1.next
            else:
                curr.next = list2
                list2 = list2.next
            curr = curr.next
        
        curr.next = list1 if list1 else list2
        return res.next