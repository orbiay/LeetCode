# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        listt = []
        poit = head

        i = 0
        while poit is not None:
            listt.append(poit.val)
            i += 1
            poit = poit.next
        poit = head
        while i > 0:
            poit.val = listt[i - 1]
            i -= 1
            poit = poit.next
        return head
            
        
        