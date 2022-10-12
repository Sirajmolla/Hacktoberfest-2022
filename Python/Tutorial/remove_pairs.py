def remove_pairs(array):
    for index in range(len(array) - 1, -1, -1):
        if array[index] % 2 == 0:
            array.pop(index)

# Array list in memory
array = [0, 1, 2, 3, 4, 5, 6, 7 ,8 , 9]

# Passing the array to a function that will remove the even numbers from the array allocated in memory with no side effect
remove_pairs(array)

# print new array
print(array)