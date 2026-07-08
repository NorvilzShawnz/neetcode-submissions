# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        length = 0
        dummy = ListNode(0)
        dummy.next = head
        curr = dummy.next

        while curr:
            length+=1
            curr = curr.next

        depth = length -n
        curr = dummy

        while curr:
            if depth == 0:
                curr.next = curr.next.next
                return dummy.next
            curr = curr.next
            depth -= 1
