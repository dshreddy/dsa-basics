## Data structure

A data structure is a specialized format for organizing, processing, retrieving and storing data. In the case of computer this data is stored in RAM

## Arrays

- Arrays are stored inside the RAM in a contigous block
- Since we need to allocate a contgous block of memory we need the size of the array before hand
- We use index to read/write an element from an array
- Reading/Writing an element from an array is O(1)
- Inserting/Deleting elements into an array is O(n).

```
Example :
array = [5,6]
To insert 4 at index 0 we need to first move 6 to index 2, 5 to index 1 & only then we can insert 4 at index 0
```

- The amorterised time complexity of pushing an element into a dynamic array is O(n)
<img src = "dynamic_array.png">

## Problems

### Static Arrays

- https://leetcode.com/problems/remove-duplicates-from-sorted-array/
- https://leetcode.com/problems/remove-element/
- https://leetcode.com/problems/shuffle-the-array/

### Dynamic Arrays

- https://leetcode.com/problems/concatenation-of-array/

### Stack

- https://leetcode.com/problems/baseball-game/
- https://leetcode.com/problems/valid-parentheses/
- https://leetcode.com/problems/min-stack/
