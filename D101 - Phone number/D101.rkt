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

;; <p>In this exercise, you will learn how to perform basic input and output. 
;; Also, you will be able to try the HKOI Online Judge system.</p>
;; <p>Write a program to read a 8-digit Hong Kong phone number and determine
;; whether it is a fixed line number (numbers that start with \texttt{2} or
;; \texttt{3}) or a mobile number (numbers that start with \texttt{5},
;; \texttt{6} or \texttt{9}).</p>
;; 
;; <h1>Input and Output</h1>
;; 
;; <p>The 8-digit phone number will be provided through the standard input. 
;; The number will not start with \texttt{999}.</p>
;; 
;; <p>After determining the correct type, output the word \texttt{Fixed} 
;; or \texttt{Mobile}.</p>
;; 
;; <div class="panel panel-danger">
;;   <div class="panel-heading">
;;     <h3 class="panel-title">Input and Output Format</h3>
;;   </div>
;;   <div class="panel-body">
;; <p>No need to validate inputs. Do not output prompts. 
;; (e.g.: "Please enter a number: ")</p>
;; <p>The last line of your output should also contain the end of line character.</p>
;; <p style="font-size: 16px">Pascal: <i class="texttt">writeln(ans);</i>    
;; C: <i class="texttt">printf("%d\n", ans);</i>  
;; C++: <i class="texttt">cout << ans << endl;</i></p>
;;     </p>
;;   </div>
;; </div>

#lang racket
(define a (read-line))
(define b (string-split a ""))
(cond
   [(equal? (or "2" "3") (second b)) (display "Fixed")]
   [(equal? (or "5" "6" "9") (second b)) (display "Mobile")])