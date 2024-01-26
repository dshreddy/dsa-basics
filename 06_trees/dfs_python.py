class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

def inorder(root):
    if not root:
        return    
    inorder(root.left)
    print(root.val)
    inorder(root.right)

def preorder(root):
    if not root:
        return    
    print(root.val)
    preorder(root.left)
    preorder(root.right)

def postorder(root):
    if not root:
        return    
    postorder(root.left)
    postorder(root.right)
    print(root.val)

root = TreeNode(4)
root.left = TreeNode(3)
root.right = TreeNode(6)

root.left.left = TreeNode(2)

root.right.left = TreeNode(5)
root.right.right = TreeNode(7)

inorder(root=root)