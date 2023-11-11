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
#<p>Write a program find the Greatest Common Divisor (also called Highest Common Factor) and Least (Lowest) Common Multiple of two integers.</p>
#
#<h1>Input and Output</h1>
#
#<p>The input consists of two integers $N$ and $M$ separated by a space. ($1 \le N \le 10000$ and $1 \le M \le 10000$)</p>
#
#<p>On the first line output their Greatest Common Divisor. On the second line output their Least Common Multiple.</p>
import math
binput_ = input()
a = int(binput_.split(" ")[0] ) 
b = int(binput_.split(" ")[1] ) 
print(math.gcd(a,b))
print(int((a*b)/math.gcd(a,b)))