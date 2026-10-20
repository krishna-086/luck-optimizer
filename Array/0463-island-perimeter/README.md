# [463. Island Perimeter](https://leetcode.com/problems/island-perimeter/)

[Array](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 7 | 2026-07-04 | 2026-07-04 |

**Topics:** Array, Depth-First Search, Breadth-First Search, Matrix

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [cpp](solution.cpp) | Accepted | 35 ms | 109 MB | 2026-08-25 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2026-08-25 | Accepted | cpp | 35 ms | 109 MB |
| 2026-08-18 | Accepted | cpp | - | - |
| 2026-08-12 | Accepted | cpp | - | - |
| 2026-08-03 | Accepted | cpp | - | - |
| 2026-07-21 | Accepted | cpp | - | - |
| 2026-07-15 | Accepted | cpp | - | - |
| 2026-07-04 | Accepted | cpp | - | - |

## Problem

<details>
<summary>Show description</summary>

<p>You are given <code>row x col</code> <code>grid</code> representing a map where <code>grid[i][j] = 1</code> represents&nbsp;land and <code>grid[i][j] = 0</code> represents water.</p>

<p>Grid cells are connected <strong>horizontally/vertically</strong> (not diagonally). The <code>grid</code> is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).</p>

<p>The island doesn&#39;t have &quot;lakes&quot;, meaning the water inside isn&#39;t connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don&#39;t exceed 100. Determine the perimeter of the island.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2018/10/12/island.png" style="width: 221px; height: 213px;" />
<pre>
<strong>Input:</strong> grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
<strong>Output:</strong> 16
<strong>Explanation:</strong> The perimeter is the 16 yellow stripes in the image above.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> grid = [[1]]
<strong>Output:</strong> 4
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> grid = [[1,0]]
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>row == grid.length</code></li>
	<li><code>col == grid[i].length</code></li>
	<li><code>1 &lt;= row, col &lt;= 100</code></li>
	<li><code>grid[i][j]</code> is <code>0</code> or <code>1</code>.</li>
	<li>There is exactly one island in <code>grid</code>.</li>
</ul>

</details>
