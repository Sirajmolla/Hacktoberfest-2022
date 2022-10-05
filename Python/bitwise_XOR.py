a = list(map(int, input("elements of array A:-").strip().split()))
b = list(map(int, input("elements of array B:-").strip().split()))

c = []
n = len(c)


def xorOfArray(a, b, c):
    # Resultant variable
    for i in range(0, len(a)):
        for j in range(0, len(b)):
            c.append(a[i] | b[j])

    xor_arr = 0

    # Iterating through every element in
    # the array
    for i in range(len(c)):
        # Find XOR with the result
        xor_arr = xor_arr ^ c[i]

    # Return the XOR
    return xor_arr


print(xorOfArray(a, b, c))
