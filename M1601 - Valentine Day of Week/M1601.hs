-- Copyright (c) 2022 ivantam04

-- Permission is hereby granted, free of charge, to any person obtaining a copy
-- of this software and associated documentation files (the "Software"), to deal
-- in the Software without restriction, including without limitation the rights
-- to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
-- copies of the Software, and to permit persons to whom the Software is
-- furnished to do so, subject to the following conditions:
-- 
-- The above copyright notice and this permission notice shall be included in all
-- copies or substantial portions of the Software.
-- 
-- THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
-- IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
-- FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
-- AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
-- LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
-- OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
-- SOFTWARE.
weekday_str :: Int -> String
weekday_str day
    | day == 0 = "Sunday"
    | day == 1 = "Monday"
    | day == 2 = "Tuesday"
    | day == 3 = "Wednesday"
    | day == 4 = "Thursday"
    | day == 5 = "Friday"
    | day == 6 = "Saturday"
    | otherwise = "wtf"

main = do
	str_year <- getLine
	let y = (read str_year :: Int) - 1
	let weekday = ((y) + (div y 4) - (div y 100) + (div y 400) + 3 + 14) `mod` 7
	putStrLn (weekday_str weekday)
