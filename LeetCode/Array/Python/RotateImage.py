def rotate(matrix):
	matrix_size = len(matrix)
	for i in range(matrix_size):
		for j in range(matrix_size - i):
			matrix[i][j], matrix[matrix_size-1-j][matrix_size-1-i] = matrix[matrix_size-1-j][matrix_size-1-i], matrix[i][j]	

	for i in range(matrix_size // 2):
		for j in range(matrix_size):
			matrix[i][j], matrix[matrix_size-1-i][j] = matrix[matrix_size-1-i][j], matrix[i][j]

def main():
	matrix = [[1,2,3],[4,5,6],[7,8,9]]
	print(matrix)
	rotate(matrix)
	print(matrix)

if __name__ == "__main__":
	main()