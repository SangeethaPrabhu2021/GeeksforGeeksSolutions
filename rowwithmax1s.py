class Solution:

    def rowWithMax1s(self,arr, n, m):
        m1 = -1
        i = -1
        for a in range(len(arr)):
            x = arr[a].count(1)
            if x > m1:
                m1 = x
                i = a
        return -1 if m1 == 0 else i
