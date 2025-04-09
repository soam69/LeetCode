# https://leetcode.com/problems/roman-to-integer/

class Solution:
    def romanToInt(self, s: str) -> int:
        add = 0
        num = len(s)
        s+= "I"
        for i in range(num):
            if s[i] == "I":
                if (s[i+1]!= "V") and ( (s[i+1]!= "X")):
                    add += 1
                else:
                    add -= 1
            elif s[i] == "X":
                if (s[i+1]!= "L") and ( (s[i+1]!= "C")):
                    add += 10
                else:
                    add -= 10
            elif s[i] == "C":
                if (s[i+1]!= "D") and ( (s[i+1]!= "M")):
                    add += 100
                else:
                    add -= 100
            elif s[i] == "V":
                add += 5
            elif s[i] == "L":
                add += 50
            elif s[i] == "D":
                add += 500
            elif s[i] == "M":
                add += 1000
        return add