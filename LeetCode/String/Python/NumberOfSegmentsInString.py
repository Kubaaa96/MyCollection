def countSegments(s):
	return len([i for i in s.strip().split(' ') if i])


def main():
	print(countSegments("Hello, my name is John"))
	print(countSegments("Hello"))
	print(countSegments("love live! mu'sic forever"))

if( __name__ == "__main__"):
	main()
