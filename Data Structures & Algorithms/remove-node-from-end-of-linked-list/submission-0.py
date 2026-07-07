# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head
        curr = dummy.next

        length = 0
        while curr:
            length+=1
            curr = curr.next

        curr = dummy
        depth = length - n

        while curr:
            if depth == 0:
                curr.next = curr.next.next
                return dummy.next
            depth-=1
            curr = curr.next