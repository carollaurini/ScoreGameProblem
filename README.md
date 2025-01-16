Baseball Game. 

You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores ofthe past rounds may affect the fytyre round's scores.
All the beginning of the game, you start with as empyty record. You are given a list of strings ops, where ops[i] is the ith operation you must apply to the record and is one of the following.
1) An integer "x" : record a new score of x.
2) "+": Record a new socre that is the sum of the previous two score. It is guaranteed there will always be two previous scores.
3) "D": Record a new score that is double the previous score. It s guaranteed there will always be a previous score. 
4) "C": Invalidate the previous score, removing it from the record. It is guaranteed there will always be a prevous score.

 Return the sum of all scores on the record.

Example

Input: ops = ["5","2","C","D","+"]
Output: 30

Explanation:
"5" : Add 5 to the record : v = [5]
"2" : Add 2 to the record : v = [5,2]
"C" : Invalidate and remove the previous score: v = [5]
"D" : Add 2*5 to the record: v [5,10]
"+" : Add 5+10 to the record: [5,10,15]

The total sum of v is 30.
