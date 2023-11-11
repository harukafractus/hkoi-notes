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
# <p>Hangman is a word guessing game. The game is played using a hidden English word $H$. Initially all its letters are hidden, but the player will know its length (the number of letters in the word). Next, the player will guess letters one by one. If $H$ contains the letter guessed, the letter and the position(s) will be revealed. For example, if $H$ = \texttt{abacus} and the player guesses \texttt{a}, \texttt{a_a___} will be shown to the player. The player will make guesses repeatedly until the all letters in $H$ are revealed.</p>
# <p>Write a program to simulate the game.</p>
# 
# <h1>Input and Output</h1>
# 
# <p>The first line contains an English word $H$. It contains only lowercase English letters (no spaces) and its length is between 1 and 20 (inclusive).</p>
# <p>At this time, you may print some blank lines in order to hide the word entered.</p>
# <p>Then, input the guessing sequence. They are given as lowercase letters one by one in separate lines. The letters are distinct. After each letter entered, reveal the suitable letters and output the result in a separate line with hidden letters replaced by underscores \texttt{_}.</p>
# <p>Your program should end when the game ends (all letters have been revealed).</p>
import sys

def hideword(word):
  hidden_word = []
  for x in word:
    hidden_word.append("_")
  return hidden_word

def char_location(my_str, my_char):
  return [i for i, ltr in enumerate(my_str) if ltr == my_char]

def reveal_charater(letter, word, revealed):
  locate_of_char_list = char_location(word, letter)
  for x in locate_of_char_list:
      revealed[x] = letter
  return revealed

def joinstr(listed_word):
    temp = ""
    return (temp.join(listed_word))

if __name__ == "__main__":
    word = list(input())
    censored = hideword(word)
    while 1:
        if "_" not in censored:
            sys.exit()
        letter = input()
        censored = reveal_charater(letter, word, censored)
        print(joinstr(censored))
