# https://leetcode.com/problems/check-if-n-and-its-double-exist/

class Solution(object):
    def checkIfExist(self, arr):
        n = len(arr)
        for i in range (n):
            for j in range (i+1,n):
                if (arr[i]*2 == arr[j]) or (arr[i]*0.5 == arr[j]):
                    return True
        return False
        