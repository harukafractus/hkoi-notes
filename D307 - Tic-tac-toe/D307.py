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
# <p>In Tic-tac-toe, two players take turns to mark an empty cell in a $3 \times 3$ grid using their own symbol \texttt{X} or \texttt{O}. A player wins when 3 of his/her symbols form a vertical line, horizontal line or a diagonal.</p>
# <p>Given the current state of a Tic-tac-toe game, determine which of the players has won.</p>
# 
# <h1>Input and Output</h1>
# 
# <p>The input consists of 3 lines of 3 characters. Each of the character could be \texttt{X}, \texttt{O} or \texttt{.}, which denotes an empty cell. It is guaranteed that it is a valid state. For example, if there is one \texttt{X}, there will be 0, 1 or 2 \texttt{O}s.</p>
# 
# <p>If one of the players wins, output \texttt{X wins} or \texttt{O wins}.<br>
# If the game has ended (all 9 cells are marked) and neither player won, output \texttt{Draw}.<br>
# If the game has not ended, output \texttt{Not ended}.</p>
row1 = list(input())
row2 = list(input())
row3 = list(input())

def check(r, r2, r3):
    if (row1[0] == "X") and (row2[0] == "X") and (row3[0] == "X"):
        return("X wins")
    elif (row1[1] == "X") and (row2[1] == "X") and (row3[1] == "X"):
        return("X wins")
    elif (row1[2] == "X") and (row2[2] == "X") and (row3[2] == "X"):
        return("X wins")
    elif (row1.count("X") == 3) or (row2.count("X") == 3) or (row3.count("X") == 3):
        return("X wins")
    elif row1[0] == "X" and (row2[1] == "X") and (row3[2] == "X"):
        return("X wins")
    elif (row2.count("X") == 3) or (row3.count("X") == 3):
        return("X wins")
    elif row1[0] == "X" and (row2[1] == "X") and (row3[2] == "X"):
        return("X wins")
    elif row1[2] == "X" and (row2[1] == "X") and (row3[0] == "X"):
        return("X wins")
    elif (row1[0] == "O") and (row2[0] == "O") and (row3[0] == "O"):
        return("O wins")
    elif row1[2] == "X" and (row2[1] == "X") and (row3[0] == "X"):
        return("X wins")
    elif (row1[0] == "O") and (row2[0] == "O") and (row3[0] == "O"):
        return("O wins")
    elif (row2.count("X") == 3) or (row3.count("X") == 3):
        return("X wins")
    elif row1[0] == "X" and (row2[1] == "X") and (row3[2] == "X"):
        return("X wins")
    elif row1[2] == "X" and (row2[1] == "X") and (row3[0] == "X"):
        return("X wins")
    elif (row1[0] == "O") and (row2[0] == "O") and (row3[0] == "O"):
        return("O wins")
    elif (row1[1] == "O") and (row2[1] == "O") and (row3[1] == "O"):
        return("O wins")
    elif (row1[2] == "O") and (row2[2] == "O") and (row3[2] == "O"):
        return("O wins")
    elif (row1.count("O") == 3) or (row2.count("O") == 3) or (row3.count("O") == 3):
        return("O wins")
    elif row1[0] == "O" and (row2[1] == "O") and (row3[2] == "O"):
        return("O wins")
    elif row1[2] == "O" and (row2[1] == "O") and (row3[0] == "O"):
        return("O wins")
    else:
        pass
    g = row1 + row2 + row3
    while ("O" in g):
        g.remove("O")
    while ("X" in g):
        g.remove("X")
    if len(g) == 0:
        return("Draw")
    else:
        return "Not ended"

print(check(row1, row2, row3))