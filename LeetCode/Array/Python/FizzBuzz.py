def fizz_buzz(n):
    result = []

    for i in range(1, n+1):
        if i % 15 == 0:
            result.append("FizzBuzz")
        elif i % 5 == 0:
            result.append("Buzz")
        elif i % 3 == 0:
            result.append("Fizz")
        else:
            result.append(str(i))

    return result

def main():
	return_list = fizz_buzz(15)

	for item in return_list:
		print(item)

if (__name__ == "__main__"):
	main()
