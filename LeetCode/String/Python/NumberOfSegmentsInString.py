def countSegments(s):
	if not s:
		return 0
	space_counter = 0
	for character in s:
		if(character == " "):
			space_counter += 1
	if(space_counter >= 0):
		space_counter += 1
	return space_counter

def main():
	print(countSegments("Hello, my name is John"))
	print(countSegments("Hello"))
	print(countSegments("love live! mu'sic forever"))

if( __name__ == "__main__"):
	main()
