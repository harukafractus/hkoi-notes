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
# <p>Given a sorted array with $N$ integers and a list of numbers, for each of the $Q$ numbers, check whether they exist in the array or not.</p>
# 
# <h1>Input</h1>
# <p>The first line contains two integers, $N$ and $Q$. ($1 \le N \le 100000$, $1 \le Q \le 100000$).</p>
# <p>The second line contains of $N$ distinct integers sorted in ascending order, separated by spaces.</p>
# <p>The third line contains of $Q$ integers, separated by spaces.</p>
# <p>All integers are in $[-2147483648, 2147483647]$ (the range of 32-bit integer).</p>
# 
# <h1>Output</h1>
# <p>Output $Q$ lines, one for each number in order. Each line should be \texttt{Yes} or \texttt{No} to indicate whether it exist in the array or not.</p>

n, q = map(int, input().split())
a = list(map(int, input().split()))
x = list(map(int, input().split()))
for num in x:
    l = 0
    r = n - 1
    found = False
    while l <= r:
        mid = (l + r) // 2
        if a[mid] == num:
            found = True
            break
        elif a[mid] < num:
            l = mid + 1
        else:
            r = mid - 1
    if found:
        print('Yes')
    else:
        print('No')