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
# <p>You will be given a list of integers. Write a program to check whether the list satisfies the following rules:</p>
# <ul>
# 	<li>All numbers should be larger than 100, but smaller than 50000.
# 	<li>All numbers should be distinct.
# 	<li>All numbers should be sorted in ascending order.
# </ul>
# 
# <h1>Input</h1>
# 
# <p>The first line contains one integer $N$, the length of the list. ($1 \le N \le 10$)</p>
# <p>The second line contains the list of $N$ integers. The values are in $[-2147483648, 2147483647]$ (the range of 32-bit integer).</p>
# 
# <h1>Output</h1>
# <p>Output \texttt{Valid} if the list satisfies all the rules above, else output \texttt{Invalid}.</p>
dummy = input()
c = input()
priv = 100
out = "Valid"
for x in c.split():
    if not (100 < int(x) < 50000) or not int(x) > priv:
        out = "Invalid"
    priv = int(x)
print(out)
