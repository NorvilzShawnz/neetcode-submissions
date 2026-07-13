class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:

        def sameTree(root, subRoot):
            if not root and not subRoot:
                return True
            
            if not root or not subRoot:
                return False
            
            if root.val != subRoot.val:
                return False

            return (
                sameTree(root.left, subRoot.left) and
                sameTree(root.right, subRoot.right)
            )
        
        if not subRoot:
            return True
        
        if not root:
            return False
        
        if sameTree(root, subRoot):
            return True
        
        return (
            self.isSubtree(root.left, subRoot) or
            self.isSubtree(root.right, subRoot)
        )