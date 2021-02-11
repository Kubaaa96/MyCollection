def isPalindrome(s):
    """
    :type s: str
    :rtype: bool
    """
    new_string = ""
    for character in s:
        if character.isalnum():
            new_string += character


    reversed_string = new_string[::-1]

    new_string = new_string.lower()
    reversed_string = reversed_string.lower()
    print(new_string)
    print(reversed_string)
    if(new_string == reversed_string):
        return True
    else:
        return False

def main():
    print(isPalindrome("A man, a plan, a canal: Panama"))

if __name__ == "__main__":
    main()
