# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode | None) -> ListNode | None:
        # FIX: Use 'or' instead of '|' to enable short-circuiting
        if head is None or head.next is None:
            return head

        # Recursively reverse the rest of the list
        newHead = self.reverseList(head.next)
        
        # Flip the pointers
        head.next.next = head
        head.next = None

        return newHead