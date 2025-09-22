<h2><a href="https://www.geeksforgeeks.org/problems/c-stl-set-5-queue/1?page=2&category=Queue&sortBy=submissions">C++ STL | Set 5 (queue)</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px">Implement different operations on a queue&nbsp;q&nbsp;.<br>
<br>
<strong>Input:</strong><br>
The first line of input contains an integer <strong>T</strong> denoting the no of test cases . Then T test cases follow. The first line of input contains an integer <strong>Q</strong> denoting the no of queries . Then in the next line are <strong>Q</strong>&nbsp;space separated queries .<br>
A query can be of&nbsp;four&nbsp;types&nbsp;<br>
1. a x (Pushes an element x at the end of the&nbsp;queue&nbsp;q&nbsp;)<br>
2. b (if queue&nbsp;is not empty&nbsp;pops the front&nbsp;element and prints it, else prints -1)<br>
3. c (prints the size of the queue)<br>
4. d (if queue&nbsp;is not empty prints the front&nbsp;element of the queue, else&nbsp;prints&nbsp;-1)<br>
5. e (if queue is not empty prints the last element of the queue else prints -1)<br>
<br>
<strong>Output:</strong><br>
The output for each test case will&nbsp;&nbsp;be space separated integers denoting the results of each query .&nbsp;<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=T&lt;=100<br>
1&lt;=Q&lt;=100<br>
<br>
<strong>Example:</strong></span></p>

<p><span style="font-size:20px"><strong>Input</strong><br>
2<br>
5<br>
a 4 a 6 a 7 b c&nbsp;<br>
4<br>
a 55 a 11 d e<br>
<strong>&nbsp;<br>
Output</strong><br>
4 2<br>
55 11<br>
<br>
<strong>Explanation :<br>
For the first test case</strong><br>
There are five&nbsp;queries.&nbsp;Queries&nbsp;are&nbsp;performed in this order<br>
1. a 4 { queue&nbsp;q&nbsp;has&nbsp;4 &nbsp;}<br>
2. a 7&nbsp;{queue q&nbsp;has 4,7 }<br>
3. a 6 {queue q&nbsp;has 4,7,6}<br>
4. b &nbsp; &nbsp;{pop 4&nbsp;from queue&nbsp;q&nbsp;and prints it queue&nbsp;now has 7,6}<br>
5. c &nbsp; &nbsp;{prints the size of the queue q ie 2}<br>
<br>
<strong>For the sec test case&nbsp;</strong><br>
There are three&nbsp;queries.&nbsp;Queries&nbsp;are&nbsp;performed in this order<br>
1. a 55 &nbsp;{queue q&nbsp;has&nbsp;55 }<br>
2. a 11 &nbsp;{queue q&nbsp;has 55 ,11 }<br>
3. d &nbsp; &nbsp; &nbsp;{prints the front&nbsp;element of the queue q&nbsp;ie. 55 }<br>
4. e &nbsp; &nbsp; &nbsp;{prints the end element of the queue q ie 11 }</span><br>
<br>
<br>
<br>
<span style="font-size:16px"><strong>Note:</strong>The <strong>Input/Output</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>CPP</code>&nbsp;<code>Queue</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;