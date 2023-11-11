# Copyright (c) 2022 ivantam04

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

# The following task description belongs to Hong Kong Olympiad in Informatics 
# Organizing Committee and made available under the Creative Commons
# Attribution-ShareAlike 4.0 International licence:
# <p>Linked list is a data structure that allows efficient sequential access and manipulation of data. When moving along a linked list, we need to use a pointer to store the current position. Specifically, it supports the following operations.</p>
# <ul>
# 	<li>\texttt{HEAD}: Reset the pointer to the first element in the linked list.</li>
# 	<li>\texttt{NEXT}: Move the pointer to the next element.</li>
# 	<li>\texttt{QUERY}: Query the value of the element pointed by the pointer.</li>
# </ul>
# <p>In this exercise, we will learn how a linked list is represented using an array. Write a program to walk through a linked list.</p>
# 
# <h1>Input</h1>
# 
# <p>The first line contains two integers $N$ and $H$. $N$ is the size of the array storing the linked list. ($1 \le N \le 10000$). $H$ is the index of the first element in the linked list. ($0 \le H \le N$) If $H = 0$, it means that the linked list is empty.</p>
# <p>The next line contains $N$ integers, of which the $i^\text{th}$ is the value stored at array index $i$. The integers are between $1$ and $10^9$.</p>
# <p>The next line contains $N$ integers, of which the $i^\text{th}$ is the "next pointer" -- index of the element after the element at array index $i$. For the last element in the linked list, the number is 0. It is possible that some indexes are not reachable, as they could be deleted or uninitialized elements. Those unreachable indexes may contain any value or next pointer.</p>
# 
# <h1>Output</h1>
# <p>Starting from the head of the linked list, print out the values one by one in separate lines.</p>
# <p>Finally, output the word \texttt{End} in a separate line.</p>
n, h = map(int, input().split())
a = list(map(int, input().split()))
a = [0] + a
b = list(map(int, input().split()))
b = [0] + b
p = h
while p != 0:
    print(a[p])
    p = b[p]
print('End')