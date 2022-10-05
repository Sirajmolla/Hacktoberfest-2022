A = [[10, 7, 8],
	  [4, 5, 6],
	  [7, 0, 9]]

B = [[5, 8, 1, 2],
	  [6, 7, 3, 0],
	  [4, 5, 9, 1]]

result = [[sum(a * b for a, b in zip(A_row, B_col))
						for B_col in zip(*B)]
								for A_row in A]

for r in result:
	print(r)
