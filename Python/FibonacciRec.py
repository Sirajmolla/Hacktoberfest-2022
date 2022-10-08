def fibRec( n ):
   fibValue = 0
   if (n < 0):
      raise ValueError('Value Cannot Be Negative!!!')
   elif (n == 0):
      fibValue = 0 
   elif (n == 1):
      fibValue = 1
   else:
      fibValue = fibRec(n-1) + fibRec(n-2) 
   return fibValue
   
c = int(input("Enter a Value: "))
print(fibRec(c))
