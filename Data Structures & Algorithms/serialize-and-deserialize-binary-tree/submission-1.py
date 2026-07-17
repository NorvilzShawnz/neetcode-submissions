# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Codec:
    
    # Encodes a tree to a single string.
    def serialize(self, root: Optional[TreeNode]) -> str:
        ser = []
        def dfs(node):
            nonlocal ser
            
            if not node:
                ser.append("N")
                return

            ser.append(str(node.val))

            dfs(node.left)
            dfs(node.right)
        dfs(root)
        return ",".join(ser)

        
        
    # Decodes your encoded data to tree.
    def deserialize(self, data: str) -> Optional[TreeNode]:
        vals = deque(data.split(","))
        def dfs():
            val = vals.popleft()

            if val == "N":
                return None

            node = TreeNode(int(val))
            node.left = dfs()
            node.right = dfs()

            return node
        return dfs()


