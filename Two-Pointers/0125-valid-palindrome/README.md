# [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

[Two Pointers](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 9 | 2024-06-04 | 2024-06-04 |

**Topics:** Two Pointers, String

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [cpp](solution.cpp) | Accepted | 0 ms | 9.8 MB | 2025-12-10 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2025-12-10 | Accepted | cpp | 0 ms | 9.8 MB |
| 2024-06-05 | Accepted | cpp | - | - |
| 2024-06-04 | Accepted | cpp | - | - |
| 2024-06-04 | Compile Error | cpp | - | - |
| 2024-06-04 | Compile Error | cpp | - | - |
| 2024-06-04 | Accepted | cpp | - | - |
| 2024-06-04 | Wrong Answer | cpp | - | - |
| 2024-06-04 | Accepted | cpp | - | - |
| 2024-06-04 | Wrong Answer | cpp | - | - |

## Problem

<details>
<summary>Show description</summary>

<p>A phrase is a <strong>palindrome</strong> if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.</p>

<p>Given a string <code>s</code>, return <code>true</code><em> if it is a <strong>palindrome</strong>, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;A man, a plan, a canal: Panama&quot;
<strong>Output:</strong> true
<strong>Explanation:</strong> &quot;amanaplanacanalpanama&quot; is a palindrome.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;race a car&quot;
<strong>Output:</strong> false
<strong>Explanation:</strong> &quot;raceacar&quot; is not a palindrome.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot; &quot;
<strong>Output:</strong> true
<strong>Explanation:</strong> s is an empty string &quot;&quot; after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>s</code> consists only of printable ASCII characters.</li>
</ul>

</details>
