# 📚 Arrays - Complete Beginner-Friendly Interview Guide

## 📝 Introduction
An **array** is one of the simplest yet most powerful data structures in computer science.  
It stores values of the **same data type** in a sequence, placed in **contiguous memory locations**.  

In an array, we usually focus on two things:
1. **Index** – the position of the element (starts from `0` in most languages).
2. **Value** – the actual data stored at that position.

Different programming languages handle arrays differently:
- **Dynamic arrays** (like Python's `list`, JavaScript's `Array`, Ruby's `Array`, PHP arrays) can grow or shrink in size automatically. You do not need to pre-define their size.
- **Static arrays** (like in C, C++) have a fixed size, and you must declare the size when creating them.

💡 **Why Arrays are Important in Interviews:**  
Arrays are extremely common in coding interviews. Even if the question is about something else (like strings, searching, or sorting), arrays often form the base of the problem.

---

## ✅ Advantages of Arrays
- You can store **multiple items** of the same type under a single variable name.
- **Fast access**: If you know the index, you can directly access the element in **O(1) time**.
- More memory-efficient compared to using multiple separate variables.

## ⚠️ Disadvantages of Arrays
- **Slow insertion/removal in the middle**: When you add or remove an element in the middle, all the elements after it must be shifted.
- **Resizing can be costly** in fixed-size arrays: If the array becomes full, a new array must be created and all elements copied over. This is **O(n)** time.

---

## 📚 Learning Resources
**Readings:** [Array in Data Structure - Guru99](https://www.guru99.com/arrays-in-data-structure.html)  

---

## 🔑 Common Terms You Must Know

| Term | Definition | Example |
|------|------------|---------|
| **Subarray** | A section of the array where all elements are next to each other (contiguous). | In `[2, 3, 6, 1, 5, 4]`, `[3, 6, 1]` ✅ is a subarray, but `[3, 1, 5]` ❌ is not. |
| **Subsequence** | A sequence derived from the array by deleting some elements without changing the order of the remaining elements. | In `[2, 3, 6, 1, 5, 4]`, `[3, 1, 5]` ✅ is a subsequence, but `[3, 5, 1]` ❌ is not. |

---

## ⏱ Time Complexity of Common Array Operations

| Operation | Time Complexity | Notes |
|-----------|-----------------|-------|
| **Access** | O(1) | Direct index access. |
| **Search** | O(n) | Have to scan each element. |
| **Search (sorted)** | O(log n) | Binary search possible. |
| **Insert** | O(n) | Shifting elements to the right is required. |
| **Insert at the end** | O(1) | No shifting required. |
| **Remove** | O(n) | Shifting elements to the left is required. |
| **Remove from end** | O(1) | No shifting required. |

---

## 🧐 Things to Watch for in Interviews
- **Duplicates**: Always clarify if duplicates exist and whether they affect the solution.
- **Index bounds**: Avoid going out of array boundaries — it may crash your program.
- **Slicing or concatenating arrays**: These usually take O(n) time, so avoid unnecessary slicing in performance-critical code.

---

## ⚡ Common Corner Cases
- Empty array.
- Array with only 1 or 2 elements.
- Arrays where all elements are the same.
- Arrays containing duplicate values.

---

## 🛠 Techniques to Master for Array Problems

<details>
<summary>📌 Sliding Window</summary>
A technique used for problems involving subarrays or substrings.  
We keep two pointers (`start` and `end`) and move them forward while maintaining certain conditions.  
Example: *Minimum Size Subarray Sum*.  
Time complexity is usually **O(n)**.
</details>

<details>
<summary>📌 Two Pointers</summary>
Two pointers can start from different ends or from different arrays.  
Often used for sorted arrays or merging.  
Example: *Merge Sorted Array*.
</details>

<details>
<summary>📌 Traverse from the Right</summary>
Sometimes problems are easier if you process the array backwards.  
Example: *Daily Temperatures*.
</details>

<details>
<summary>📌 Sorting First</summary>
If the problem allows changing the order, sorting can simplify logic and enable binary search.  
Be careful: sorting takes **O(n log n)**.
</details>

<details>
<summary>📌 Precomputation</summary>
Precompute prefix sums or products to answer range queries quickly.  
Example: *Product of Array Except Self*.
</details>

<details>
<summary>📌 Using Index as Hash Key</summary>
If the array contains numbers from `1` to `N`, you can use the array itself to mark presence of numbers by negating values at certain indices.  
Example: *First Missing Positive*.
</details>

---

## ⭐ Essential Questions for Practice

| Problem | Link |
|---------|------|
| Two Sum | [🔗 LeetCode](https://leetcode.com/problems/two-sum/) |
| Best Time to Buy and Sell Stock | [🔗 LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) |
| Product of Array Except Self | [🔗 LeetCode](https://leetcode.com/problems/product-of-array-except-self/) |
| Maximum Subarray | [🔗 LeetCode](https://leetcode.com/problems/maximum-subarray/) |

---

## 💪 More Recommended Practice

| Problem | Link |
|---------|------|
| Contains Duplicate | [🔗 LeetCode](https://leetcode.com/problems/contains-duplicate/) |
| Maximum Product Subarray | [🔗 LeetCode](https://leetcode.com/problems/maximum-product-subarray/) |
| Search in Rotated Sorted Array | [🔗 LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array/) |
| 3Sum | [🔗 LeetCode](https://leetcode.com/problems/3sum/) |
| Container With Most Water | [🔗 LeetCode](https://leetcode.com/problems/container-with-most-water/) |
| Sliding Window Maximum | [🔗 LeetCode](https://leetcode.com/problems/sliding-window-maximum/) |

---

💡 **Pro Tip:** Mastering arrays will also make you better at solving string problems, because strings are essentially arrays of characters.
