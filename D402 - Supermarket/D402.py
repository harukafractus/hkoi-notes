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
# <p>You are a programmer of a supermarket chain ParkNCome. You are developing a new Point of Sales system. The system should be able to store a database of the products and to perform customer checkouts.</p>
# <p>First, the system should read the list of products in the supermarket. Each product has a UPC barcode and a unit price. The UPC barcode is a 13 digit number while the price is a positive number with one decimal place. Then, the system would scan the barcodes of the items in the customer's cart one by one. Search the product in the database and sum up the prices. Finally, display the total price.</p>
# 
# <h1>Input</h1>
# 
# <p>The first line contains an integer $N$, the number of products in the supermarket. ($1 \le N \le 100$)</p>
# <p>The next $N$ lines each describe a product: $C_i$ and $P_i$, the UPC barcode and unit price respectively. $C_i$ is a 13 digit integer without leading zeros. $P_i$ is a positive number with one decimal place. ($0.1 \le P_i \le 100.0$). The UPC barcodes are distinct.</p>
# <p>The next line contains an integer $M$, the number of items in the customer's cart. ($1 \le M \le 100$)</p>
# <p>The next $M$ lines each describe an item: its UPC barcode (same format as above). It is guaranteed that the product exists. However, the same barcode may appear more than once, meaning that the customer buys more than one of the product.</p>
# 
# <h1>Output</h1>
# <p>Output the total price with one decimal place.</p>
n = int(input())
cp = dict()
for x in range(n):
    temp = input()
    cp.update({temp.split()[0]: temp.split()[-1]})

m = int(input())
cost = 0
for x in range(m):
    temp = input()
    cost += float((cp.get(temp)))
print(round(cost, 1))