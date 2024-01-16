#%%
x = int(input())        
x1 = str(x)
x2 = x1[::-1]
print(x2)
# %%
class Solution:
    def reverse(self, x: int) -> int:
        rev =  0
        while x>0:
            ld = x%10
            rev = (rev*10)+ld
            x = x//10
        return rev


x = int(input())
res = Solution().reverse(x)
print(res)


        
# %%
