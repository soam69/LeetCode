# https://leetcode.com/problems/defuse-the-bomb/

class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        n = len(code)
        result = [0] * n
        if (k>=0):
            for i in range(n):
                for j in range(1,k+1):
                    result[i] = result[i] + code[(i+j)%n]
        else:
            k = k * (-1)
            for i in range(n):
                for j in range(1,k+1):
                    result[i] = result[i] + code[(i-j)%n]
        return result