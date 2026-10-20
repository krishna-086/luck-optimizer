# [3866. First Unique Even Element](https://leetcode.com/problems/first-unique-even-element/)

[Array](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 2 | 2026-03-14 | 2026-03-14 |

**Topics:** Array, Hash Table, Counting

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [cpp](solution.cpp) | Accepted | 1 ms | 28.6 MB | 2026-03-14 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2026-03-14 | Accepted | cpp | 1 ms | 28.6 MB |
| 2026-03-14 | Wrong Answer | cpp | - | - |

## Problem

<details>
<summary>Show description</summary>

<p>You are given an integer array <code>nums</code>.</p>

<p>Return an integer denoting the first <strong>even</strong> integer (earliest by array index) that appears <strong>exactly</strong> once in <code>nums</code>. If no such integer exists, return -1.</p>

<p>An integer <code>x</code> is considered <strong>even</strong> if it is divisible by 2.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3,4,2,5,4,6]</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<p>Both 2 and 6 are even and they appear exactly once. Since 2 occurs first in the array, the answer is 2.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [4,4]</span></p>

<p><strong>Output:</strong> <span class="example-io">-1</span></p>

<p><strong>Explanation:</strong></p>

<p>No even integer appears exactly once, so return -1.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
</ul>

</details>
