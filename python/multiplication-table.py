number = int(input ("Enter the number you wish to see the multiplication table for: "))      
# We are using "for loop" to iterate the multiplication 10 times       
print ("The Multiplication Table of: ", number)    
for count in range(1, 13):      
   print (number, 'x', count, '=', number * count)
