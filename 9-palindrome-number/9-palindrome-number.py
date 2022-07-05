class Solution:
    def isPalindrome(self, x: int) -> bool:
        left=0
        right=len(str(x))-1
        strX=str(x)
        while left!=right and right!=0:
            if strX[left]==strX[right]:
                left+=1
                right-=1
            else:
                return False
            
        return True
            
            