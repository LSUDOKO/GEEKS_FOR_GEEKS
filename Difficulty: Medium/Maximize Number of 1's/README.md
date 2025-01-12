<h2><a href="https://www.geeksforgeeks.org/problems/maximize-number-of-1s0905/1">Maximize Number of 1's</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary array <strong><code>arr[]</code></strong> (containing only 0s and 1s) and an integer <strong><code>k</code></strong>, you are allowed to flip at most <code>k</code> 0s to 1s. Find the maximum number of consecutive 1's that can be obtained in the array after performing the operation at most <code>k</code> times.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 0, 1], k = 1
<strong>Output: </strong>3
<strong>Explanation: </strong>Maximum subarray of <span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;">consecutive</span> 1's is of size 3 which can be obtained after flipping the zero present at the 1st index.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 0, 0, 1, 0, 1, 0, 1], k = 2
<strong>Output: </strong>5
<strong>Explanation: </strong>By flipping the zeroes at indices 4 and 6, we get the longest subarray from index 3 to 7 containing all 1’s.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 1], k = 2
<strong>Output: </strong>2
<strong>Explanation: </strong>Since the array is already having the max consecutive 1's, hence we dont need to perform any operation. Hence the answer is 2</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 10<sup>5</sup><br>0 &lt;= k &lt;= arr.size()<br>0 &lt;= arr[i] &lt;= 1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;