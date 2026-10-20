# [1752. Check if Array Is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/)

[Array](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 6 | 2024-06-14 | 2024-06-14 |

**Topics:** Array

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [cpp](solution.cpp) | Accepted | 0 ms | 11.1 MB | 2024-12-06 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2024-12-06 | Accepted | cpp | 0 ms | 11.1 MB |
| 2024-12-06 | Wrong Answer | cpp | - | - |
| 2024-12-06 | Wrong Answer | cpp | - | - |
| 2024-12-06 | Wrong Answer | cpp | - | - |
| 2024-12-06 | Time Limit Exceeded | cpp | - | - |
| 2024-06-14 | Accepted | cpp | - | - |

## Problem

<details>
<summary>Show description</summary>

<p>Given an array <code>nums</code>, return <code>true</code><em> if the array was originally sorted in non-decreasing order, then rotated <strong>some</strong> number of positions (including zero)</em>. Otherwise, return <code>false</code>.</p>

<p>There may be <strong>duplicates</strong> in the original array.</p>

<p><strong>Note:</strong> An array <code>A</code> rotated by <code>x</code> positions results in an array <code>B</code> of the same length such that <code>B[i] == A[(i+x) % A.length]</code> for every valid index <code>i</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,4,5,1,2]
<strong>Output:</strong> true
<strong>Explanation:</strong> [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,1,3,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> There is no sorted array once rotated that can make nums.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> true
<strong>Explanation:</strong> [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>

</details>
