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
# <p>The Heung Shing Bank is the largest bank in Heung Shing. It stores customer account transactions in files. Write a program to read the transaction history of an account from a file and display the final balance.</p>
# 
# <p>Initially the account balance is 0 dollars. Each transaction, represented by an non-zero integer, is saved in a separate line in order. A positive integer $x$ means that the customer has deposited $x$ dollars into the account while a negative integer $-x$ means that the customer has withdrawn $x$ dollars from the account. It is guaranteed that the account balance will not become negative at any time. </p>
# 
# <h1>Input</h1>
# <p>The input is stored in the file \texttt{account.txt}. The first line in the file contains an integer $N$, the number of transactions ($0 \le N \le 100$).</p>
# <p>The following $N$ lines in the file each contains an integer $x_i$ representing a transaction. ($-1000 \le x_i \le 1000$, $x \ne 0$)</p>
# 
# <h1>Output</h1>
# <p>Output an integer to the standard output (screen): the final balance of the account.</p>
with open("account.txt") as history:
    y = 0
    fl = history.readline()[-1]
    for x in history.readlines():
        y += int(x)
    print(y)