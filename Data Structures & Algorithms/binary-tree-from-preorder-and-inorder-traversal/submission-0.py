# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
            if not preorder:
                return None
                
            rootVal = preorder[0]
            root = TreeNode(rootVal)

            idx = inorder.index(rootVal)

            left_inorder = inorder[:idx]
            right_inorder = inorder[idx+1:]

            leftSize = len(left_inorder)
            rightSize = len(inorder) - leftSize

            left_preorder = preorder[1:leftSize+1]
            right_preorder = preorder[leftSize+1:]
            
            root.left = self.buildTree(left_preorder, left_inorder)
            root.right = self.buildTree(right_preorder, right_inorder)
            return root

