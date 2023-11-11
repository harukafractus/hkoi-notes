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
# <p>Implement the Insertion Sort sorting algorithm. Sort the given array in the ascending order.</p>
# 
# <h1>Input</h1>
# 
# <p>The first line contains the integer $N$, the number of integers in the array ($1 \le N \le 100$).</p>
# <p>The next line contains $N$ integers separated by spaces. The integers are in $[-2147483648, 2147483647]$ (the range of 32-bit integer).</p>
# 
# <h1>Output</h1>
# <p>Output the $N$ steps of the Insertion Sort algorithm.</p>
# <p>On the $i^\text{th}$ line output $i$ integers, which is the sorted part after the $i^\text{th}$ integer is inserted to the correct position.</p>

dummy = input()
A = list(map(int, input().split()))
i = 1

def printfuckingarray(arr, wtf):
  for x in arr[0:wtf]:
    print(x, end=" ")
  print("")
print(A[0])
while i < len(A):
  j = i
  while j > 0 and A[j-1] > A[j]:
    expected_aj = A[j-1]
    expected_aj_minus = A[j]
    A[j-1] = expected_aj_minus
    A[j] = expected_aj
    j -= 1
  i += 1
  printfuckingarray(A, i)
