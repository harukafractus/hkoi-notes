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
# <p>In this and the next exercise, we will learn how to implement the Merge Sort algorithm, which is much faster than Bubble Sort and Insertion Sort.</p>
# <p>Before that, we need to learn how to merge two sorted arrays efficiently. Do not append one array after another and sort it.</p>
# 
# <h1>Input</h1>
# 
# <p>The first line contains two integers $N$ and $M$, the size of the two arrays respectively. ($1 \le N, M \le 100,000$)</p>
# <p>The next line contains $N$ integers separated by spaces representing the first array.</p>
# <p>The third line contains $M$ integers separated by spaces representing the second array.</p>
# <p>The arrays are already sorted in ascending order and the integers are in $[-2147483648, 2147483647]$.
# 
# <h1>Output</h1>
# <p>Output the merged array in one line. The $N + M$ integers should be separated by spaces and sorted in ascending order.</p>

from heapq import merge
dummy = input()
n = list(map(int, input().split()))
t = list(map(int, input().split()))

for x in list(merge(n, t)):
  print(x, end=" ")