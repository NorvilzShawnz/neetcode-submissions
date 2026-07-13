# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        return self.invert(root)
    
    def invert(self, rootNode: Optional[TreeNode]) -> Optional[TreeNode]:
        if not rootNode:
            return
        
        rootNode.left, rootNode.right = rootNode.right, rootNode.left

        self.invert(rootNode.left)
        self.invert(rootNode.right)

        return rootNode