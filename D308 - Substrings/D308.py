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
# <p>A substring $T$ of $S$ is formed by selecting some consecutive characters in $S$. For example, \texttt{cde} is a substring of \texttt{abcdef} and \texttt{xyz} is a substring of \texttt{xyz}. Two substrings are said to be overlapping if they selected one or more the same character(s) in $S$. (Consider the characters' positions, not values.)</p>
# <p>Write a program find out
# <ul>
#   <li>The number of occurrence of substring $T$ in $S$.
#   <li>The maximum number of non-overlapping substring $T$ in $S$.
# </ul>
# <p>For example, consider $S =\ $\texttt{ABABABA} and $T =\ $\texttt{ABA}. There are 3 substrings of $S$ that are equal to $T$ (1-3, 3-5 and 5-7). However, the maximum of non-overlapping substrings is only 2 (1-3 and 5-7).
# 
# <h1>Input and Output</h1>
# 
# <p>The input consists of two lines. The first line is $S$ while the second line is $T$. Their lengths are between 1 and 50 inclusive. Both strings will contain uppercase letters only.</p>
# 
# <p>Output the answers in separate lines.</p>
import re

string = input()
pattern = input()

def count_overlapping(string, pattern):
    regex = '{}(?={})'.format(re.escape(pattern[:1]), re.escape(pattern[1:]))
    # Consume iterator, get count with minimal memory usage
    return sum(1 for _ in re.finditer(regex, string))

print(count_overlapping(string, pattern))
print(string.count(pattern))