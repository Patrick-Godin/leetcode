class Solution:
    def romanToInt(self, s: str) -> int:
        numerals = {'I':1, 'V':5,'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        total=0
        
        for i, letter in enumerate(s):
            if i<len(s)-1:
                if numerals[letter]<numerals[s[i+1]]:
                    total-=numerals[letter]
                else:
                    total+=numerals[letter]
            else:
                total+=numerals[letter]
        return total