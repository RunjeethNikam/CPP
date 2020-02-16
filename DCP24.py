def is_parent_locked(node):
    if not node.parent:
        return False
    elif node.parent.locked:
        return True
    return is_parent_locked(node.parent)

def update_parent(node, enable_locks):
    increment = 1 if enable_locks else -1
    if node.parent:
        node.parent.locked_descandants += increment
        update_parent(node.parent, enable_locks)
class Node:
    def __init__(self, val, parent):
        self.val = val
        self.parent = parent
        self.left = None
        self.right = None
        self.locked = False
        self.locked_descendants = 0
    
    def __str__(self):
        return "val = {}; locked = {}; locked_descendants = {}".format(self.val, self.locked, self.locked_descendants)
    
    def lock(self):
        if is_parent_locked(self) or self.locked_descendants:
            return False
        else:
            self.lock = True
            update_parent(node = self, enable_locks = True)
            return True
    
    def unlock(self):
        if is_parent_locked(self) or self.locked_descendants:
            return false
        else:
            self.locked = False
            update_parent(node = self, enable_locks = False)
            return True
    
    def is_locked(self):
        return self.locked
