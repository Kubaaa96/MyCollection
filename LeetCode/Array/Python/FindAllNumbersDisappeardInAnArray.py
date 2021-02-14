def findDisappearedNumbers(nums):
    for i in range(len(nums)):
        if nums[abs(nums[i]) - 1] > 0:
            nums[abs(nums[i]) - 1] *= -1

    result = []
    for i in range(len(nums)):
        if nums[i] > 0:
            result.append(i+1)
        else:
            nums[i] *= -1
    return result

def main():
    return_list = findDisappearedNumbers([4,3,2,7,8,2,3,1])
    for item in return_list:
        print(item)


if(__name__ == "__main__"):
    main()