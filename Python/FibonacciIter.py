def fibIter( n ):
   fibNum = 0 
   curNum = 1 
   lastNum = 0 
   if (n<0):
      raise ValueError('Value Cannot Be Negative!!!')
   elif (n == 0):
      fibNum = 0
   elif (n == 1):
      fibNum = 1
   else:
      for ii in range(2, n+1):
         fibNum = curNum + lastNum
         lastNum = curNum
         curNum = fibNum
   return fibNum
   
x = int(input("Enter a number: "))
print(fibIter(x))
