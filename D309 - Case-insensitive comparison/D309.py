# Copyright (c) 2021 ivantam04

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
# <p>Write a program to determine which of the two strings is lexicographically smaller, ignoring case. The <a href="https://en.wikipedia.org/wiki/Lexicographical_order" target="_blank">lexicographical order</a> is also known as dictionary order.</p>
# 
# <h1>Input and Output</h1>
# 
# <p>The input consists of two lines. The first line is $S$ while the second line is $T$. Their lengths are between 1 and 100 inclusive. Both strings will contain uppercase and lowercase letters only.</p>
# 
# <p>Compare the two strings $S$ and $T$. If $S$ is lexicographically smaller than $T$ (case-insensitive), output \texttt{Smaller}. If $S$ is lexicographically greater than $T$ (case-insensitive), output \texttt{Greater}. Output \texttt{Equal} otherwise.</p>
s1 = input()
s2 = input()
if s1.upper() < s2.upper() :
  print('Smaller')
elif s1.upper() == s2.upper():
  print('Equal')
else:
  print('Greater')