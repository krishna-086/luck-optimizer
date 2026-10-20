# [3986. Number of Elapsed Seconds Between Two Times](https://leetcode.com/problems/number-of-elapsed-seconds-between-two-times/)

[Math](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 2 | 2026-07-12 | 2026-07-12 |

**Topics:** Math, String

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [cpp](solution.cpp) | Accepted | 0 ms | 9.8 MB | 2026-07-30 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2026-07-30 | Accepted | cpp | 0 ms | 9.8 MB |
| 2026-07-12 | Accepted | cpp | - | - |

## Problem

<details>
<summary>Show description</summary>

<p>You are given two valid times <code>startTime</code> and <code>endTime</code>, each represented as a string in the format <code>&quot;HH:MM:SS&quot;</code>.</p>

<p>Return the number of seconds that have elapsed from <code>startTime</code> to <code>endTime</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">startTime = &quot;01:00:00&quot;, endTime = &quot;01:00:25&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">25</span></p>

<p><strong>Explanation:</strong></p>
<code>endTime</code> is 25 seconds ahead of <code>startTime</code>.</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">startTime = &quot;12:34:56&quot;, endTime = &quot;13:00:00&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">1504</span></p>

<p><strong>Explanation:</strong></p>

<p><code>endTime</code> is 25 minutes and 4 seconds ahead of <code>startTime</code>, which equals 1504 seconds.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>startTime.length == 8</code></li>
	<li><code>endTime.length == 8</code></li>
	<li><code>startTime</code> and <code>endTime</code> are valid times in the format <code>&quot;HH:MM:SS&quot;</code></li>
	<li><code>00 &lt;= HH &lt;= 23</code></li>
	<li><code>00 &lt;= MM &lt;= 59</code></li>
	<li><code>00 &lt;= SS &lt;= 59</code></li>
	<li><code>endTime</code> is not earlier than <code>startTime</code></li>
</ul>

</details>
