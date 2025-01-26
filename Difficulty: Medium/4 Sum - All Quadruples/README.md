<h2><a href="https://www.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1">4 Sum - All Quadruples</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of integers and another integer <strong>target</strong>. Find all <strong>unique&nbsp;</strong>quadruples from the given array that sums up to <strong>target</strong>.</span></p>
<p><span style="font-size: 18px;"><span style="font-size: 18px;"><strong>Note:</strong> All the quadruples should be internally sorted, ie for any quadruple [q1, q2, q3, q4] it should be : q1 &lt;= q2 &lt;= q3 &lt;= q4.</span></span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [0, 0, 2, 1, 1], target = 3<br><strong>Output:</strong> [0, 0, 1, 2] <strong>
Explanation: </strong>Sum of 0, 0, 1, 2 is equal to 3.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [10, 2, 3, 4, 5, 7, 8], target = 23
<strong>Output: </strong>[[2, 3, 8, 10], [2, 4, 7, 10], [3, 5, 7, 8]] <strong>
Explanation: </strong>Sum of 2, 3, 8, 10 is 23, sum of 2, 4, 7, 10 is 23 and sum of 3, 5, 7, 8 is also 23.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [0, 0, 2, 1, 1], target = 2<br><strong>Output:</strong> [0, 0, 1, 1] <strong>
Explanation: </strong>Sum of 0, 0, 1, 2 is equal to 2.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 200<br>-10<sup>6</sup> &lt;= target &lt;= 10<sup>6</sup><br>-10<sup>6</sup> &lt;= arr[i] &lt;= 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;