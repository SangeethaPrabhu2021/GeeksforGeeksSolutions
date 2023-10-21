class Solution:

    #Function to perform case-specific sorting of strings.
    def caseSort(self,s,n):
        l = []
        u = []
        for i in s:
            if i.islower():
                l.append(i)
            else:
                u.append(i)
        l.sort()
        u.sort()
        li = 0
        ui = 0
        s1 = []
        for i in s:
            if i.islower():
                s1.append(l[li])
                li += 1
            else:
                s1.append(u[ui])
                ui += 1
        return "".join(s1)
