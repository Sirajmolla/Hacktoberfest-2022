import math
  
# function to check if prime or not 
def check(n):
    if n == 1:
        return False
          
        # from 1 to sqrt(n) 
    for x in range(2, (int)(math.sqrt(n))+1):
        if n % x == 0:
            return False 
    return True
  
# driver code
n = 23
if check(n):
    print("prime") 
else:
    print("not prime")
