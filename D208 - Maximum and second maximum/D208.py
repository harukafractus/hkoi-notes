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

# <p>You will be given a list of integers. Write a program find the 
# greatest number and the second maximum number.</p>

# <h1>Input</h1>

# <p>The first line contains one integer $N$, 
# the number of integers in the list. ($2 \le N \le 10$)</p>
# <p>The second line contains the list of $N$ integers. 
# The integers are in $[-2147483648, 2147483647]$ 
# (the range of 32-bit integer).The numbers may not be distinct.</p>

# <h1>Output</h1>
# <p>On the first line output the maximum number. 
# On the second line output the second maximum number.</p>

useless = input()
numbers = input()
str_num_set = numbers.split(" ")
int_num_set = sorted(map(int, str_num_set))
print(int_num_set[-1])
print(int_num_set[-2])