;; Copyright (c) 2018 ivantam04

;; Permission is hereby granted, free of charge, to any person obtaining a copy
;; of this software and associated documentation files (the "Software"), to deal
;; in the Software without restriction, including without limitation the rights
;; to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
;; copies of the Software, and to permit persons to whom the Software is
;; furnished to do so, subject to the following conditions:
;; 
;; The above copyright notice and this permission notice shall be included in all
;; copies or substantial portions of the Software.
;; 
;; THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
;; IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
;; FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
;; AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
;; LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
;; OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
;; SOFTWARE.


;; The following task description belongs to Hong Kong Olympiad in Informatics 
;; Organizing Committee and made available under the Creative Commons
;; Attribution-ShareAlike 4.0 International licence:

;; <p>You are learning addition. Unfortunately, you don't have enough fingers to 
;; add up large numbers. Write a program to help you calculate $A + B$.</p>
;; 
;; <h1>Input and Output</h1>
;; 
;; <p>The only line of input contains two integers $A$ and $B$, separated 
;; by a space. ($-100,000 \le A, B \le 100,000$)</p>
;; 
;; <p>Output a single integer: $A + B$.</p>
;; 
;; <div class="panel panel-danger">
;;   <div class="panel-heading">
;;     <h3 class="panel-title">Input and Output Format</h3>
;;   </div>
;;   <div class="panel-body">
;; <p>No need to validate inputs. Do not output prompts.
;; (e.g.: "Please enter a number: ", "The answer is: ")</p>
;; <p>The last line of your output should also contain the end of line character.</p>
;; <p style="font-size: 16px">
;; Pascal: <i class="texttt">writeln(ans);</i>
;; C: <i class="texttt">printf("%d\n", ans);</i>  C++: 
;; <i class="texttt">cout << ans << endl;</i></p>
;;     </p>
;;   </div>
;; </div>
#lang racket
(define a (read-line))
(define b (string-split a " "))
(+
  (string->number (first b))
  (string->number (second b))
  )