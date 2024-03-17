#code i created
nn = int(input())
n = str(nn)
c = 0

for i in n:
    if i % 2 == 0:
        c += 1
print(c)

#%%
def count_digits(n):
       count=0
       x=n
       while( x != 0 ):
               x//=10
               count+=1
       return count


