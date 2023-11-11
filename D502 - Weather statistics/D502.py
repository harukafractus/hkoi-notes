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
# <p>The Hong Kong Observatory issues hourly weather readings, which contain air temperatures of different places in Hong Kong. You can view the current weather report <a href="http://www.hko.gov.hk/textonly/v2/forecast/englishwx2.htm">here</a>. Write a program to parse an excerpt of the weather report and output the minimum and maximum temperature among the locations.</p>
# 
# <h1>Input</h1>
# 
# <p>The input is stored in the file \texttt{weather.txt}. The file consists of several lines. The exact number of lines is unknown but is not less than 20 and not more than 25. Each line describes a weather station: its location and the temperature reading (an integer).</p>
# <p>For the exact format, please refer to the sample below. You may assume that none of the weather stations is out of service and the temperatures are not below zero.</p>
# 
# <h1>Output</h1>
# <p>Output two integers to the standard output (screen) in one line: the minimum and maximum temperatures respectively.
temperature_list = []
with open("weather.txt") as special_input:
    for x in special_input.read().split():
        try:
            if int(x) in range(0,40):
                temperature_list.append(int(x))
        except ValueError:
            pass

temperature_list.sort()
print(temperature_list[0], temperature_list[-1])
