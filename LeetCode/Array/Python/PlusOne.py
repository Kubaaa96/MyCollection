
def plus_one(digits):
	for i in reversed(range(len(digits))):
		if digits[i] == 0:
			digits[i] = 0
		else:
			digits[i] += 1
			return digits
	digits[0] = 1
	digits.append(0)
	return digits

def main():
	test1 = [1, 2, 3]
	test1 = plus_one(test1)
	for digit in test1:
		print(digit)
	#print("\n")

if __name__ == "__main__":
	main()