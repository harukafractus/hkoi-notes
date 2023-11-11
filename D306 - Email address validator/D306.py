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
# <p>You are about to write a simplified email address validation program. For this problem, assume that email addresses is valid if and only if it meets the following rules:</p>
# <ul>
#   <li>An email address consists of two parts separated by the \texttt{@} sign, like this: \texttt{username}\texttt{@}\texttt{host}</li>
#   <li>Username part:
#   	<ul>
#   	  <li>It should consist of one or more of the following characters: \texttt{0}-\texttt{9}, \texttt{a}-\texttt{z}, \texttt{A}-\texttt{Z}, \texttt{.} or \texttt{+}.</li>
#   	  <li>\texttt{.} may not appear in the beginning, or at the end, or consecutively.</li>
#   	</ul>
#   </li>
#   <li>Host part:
#   	<ul>
#   	  <li>It should consist of three or more of the following characters: \texttt{0}-\texttt{9}, \texttt{a}-\texttt{z}, \texttt{A}-\texttt{Z}, \texttt{-} or \texttt{.}.</li>
#   	  <li>\texttt{.} may not appear in the beginning, or at the end, or consecutively. It also has to appear at least once.</li>
#   	  <li>\texttt{-} may not appear next to \texttt{.}</li>
#   	</ul>
#   </li>
# </ui>
# 
# <p>You should only implement the above rules. Do not make additional assumptions.</p>
# 
# <h1>Input and Output</h1>
# 
# <p>The input is a string. The length of the string between 1 and 50. It will not contain spaces.</p>
# 
# <p>Check whether the string is a valid email address. It it is, output \texttt{Valid}. Output \texttt{Invalid} otherwise.</p>

import sys

x = input()

if x.count("@") != 1:
  print("Invalid")
  sys.exit()
else:
  pass

username = x.split("@")[0]
domain = x.split("@")[-1]

if x.count("..") > 0:
  print("Invalid")
elif (domain[-1] == ".") or (username[-1] == "."):
  print("Invalid")
elif (domain[0] == ".") or (username[0] == "."):
  print("Invalid")
elif domain.count("-.")>0:
  print("Invalid")
elif domain.count(".-")>0:
  print("Invalid")
elif domain.count(".")==0:
  print("Invalid")
elif username.count("-") != 0:
  print("Invalid")
elif domain.count("+") != 0:
  print("Invalid")
else:
  print("Valid")

