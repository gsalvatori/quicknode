quicknode
---

A tiny library to use dictionaries in C language using BST (Binary Search Tree).


why use binary search trees
---

If your priority is ordering, there is no better choice because it's **fast**. You can search, delete and insert nodes in O(log n), rather than using sorted arrays that takes O(n) time to execute insert and remove functions.

A binary search tree is a binary tree such that for any node **n**

* The elements of the left subtree of n have values smaller or equal to n
* The elements of the right subtree of n have values larger or equal to n

So, they are memory-efficient. They don't reserve more memory than they need to. Moreover, you can use additionally operations like traversing the tree or finding the predecessor or successor of node.



compile
---

```bash
cd quicknode
```

```bash
make
```

or

```bash
gcc -o quicknode *.c
```

---

run with:

```bash
./quicknode
```

license
---

GNU General Public License v3.0
