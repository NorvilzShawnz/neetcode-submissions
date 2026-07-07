# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:    
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        heap = []
        dummy = ListNode(0)
        curr = dummy
        counter = 0
        for node in lists:
            if node:
                heapq.heappush(heap, (node.val, counter, node))
                counter += 1
        while heap:
            val, counter, node = heapq.heappop(heap)
            curr.next = node
            curr = curr.next
            if node.next:
                heapq.heappush(heap, (node.next.val, counter, node.next))
        return dummy.next



        