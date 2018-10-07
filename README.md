# Algos


## Sorting Algorithms


### 1. Bubble Sort:

Bubble sort is based on the idea of repeatedly comparing pairs of adjacent elements and then swapping their positions if they exist in the wrong order.

**Example:**

![alt text](https://he-s3.s3.amazonaws.com/media/uploads/2682167.png)

Reference: Hackerearth

---

### 2. Insertion Sort:

Insertion sort is based on the idea that one element from the input elements is consumed in each iteration to find its correct position i.e, the position to which it belongs in a sorted array.

It iterates the input elements by growing the sorted array at each iteration. It compares the current element with the largest value in the sorted array. If the current element is greater, then it leaves the element in its place and moves on to the next element else it finds its correct position in the sorted array and moves it to that position. This is done by shifting all the elements, which are larger than the current element, in the sorted array to one position ahead

**Example:**
![alt text](https://he-s3.s3.amazonaws.com/media/uploads/46bfac9.png)

Reference: Hackerearth

---

### 3. Merge Sort:

Merge sort is a divide-and-conquer algorithm based on the idea of breaking down a list into several sub-lists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

Idea:

Divide the unsorted list into  sublists, each containing  element.
Take adjacent pairs of two singleton lists and merge them to form a list of 2 elements.  will now convert into  lists of size 2.
Repeat the process till a single sorted list of obtained.
While comparing two sublists for merging, the first element of both lists is taken into consideration. While sorting in ascending order, the element that is of a lesser value becomes a new element of the sorted list. This procedure is repeated until both the smaller sublists are empty and the new combined sublist comprises all the elements of both the sublists.

**Example:**

![alt text](https://www.geeksforgeeks.org/wp-content/uploads/Merge-Sort-Tutorial.png)

Reference: Hackerearth, Geeksforgeeks

---

### 4. Quick Sort:

Quick sort is based on the divide-and-conquer approach based on the idea of choosing one element as a pivot element and partitioning the array around it such that: Left side of pivot contains all the elements that are less than the pivot element Right side contains all elements greater than the pivot

It reduces the space complexity and removes the use of the auxiliary array that is used in merge sort. Selecting a random pivot in an array results in an improved time complexity in most of the cases.

**Example:**

![alt text](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/01/QuickSort2.png)

Reference: Hackerearth, Geeksforgeeks

---

### 5. Selection Sort:

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

**Example:**

![alt text](https://he-s3.s3.amazonaws.com/media/uploads/2888f5b.png)

### Stacks and Queues

## Stack
Stacks are dynamic data structures that follow the Last In First Out (LIFO) principle. The last item to be inserted into a stack is the first one to be deleted from it.

Inserting and deleting elements

Stacks have restrictions on the insertion and deletion of elements. Elements can be inserted or deleted only from one end of the stack i.e. from the top. The element at the top is called the top element. The operations of inserting and deleting elements are called push() and pop() respectively.

When the top element of a stack is deleted, if the stack remains non-empty, then the element just below the previous top element becomes the new top element of the stack.

For example, in the stack of trays, if you take the tray on the top and do not replace it, then the second tray automatically becomes the top element (tray) of that stack.

![alt text](https://he-s3.s3.amazonaws.com/media/uploads/9a74c87.png)

## Queue

Enqueue and Dequeue.
Enqueue means to add to queue.
Dequeue means to remove from queue.

![alt text](https://he-s3.s3.amazonaws.com/media/uploads/cf1e1c1.png)


Reference: Hackerearth, Geeksforgeeks
