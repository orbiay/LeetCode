# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def DFS(self,root,lisst):
        if not root:
            return 
        if not root.left and not root.right:
            lisst.append(root.val)
        self.DFS(root.left,lisst)
        self.DFS(root.right,lisst)
    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        lisst1,lisst2 = [],[]
        self.DFS(root1,lisst1)
        self.DFS(root2,lisst2)
        print(lisst1,lisst2)
        return lisst1 == lisst2
       
        