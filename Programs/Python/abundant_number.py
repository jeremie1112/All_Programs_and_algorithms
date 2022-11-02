# A program to check if an input number is abundant
def is_abundant_number(num: int) -> bool:
	if num <= 0:
		raise Exception("The input number needs to be a non-negative integer!")
	if num == 1:
		return False

	aliquot_sum = 0

	for i in range(1, int(num/2) + 1):
		if num % i == 0:
			aliquot_sum += i

	return aliquot_sum > num

if __name__ == '__main__':
	input_val = int(input("Please provide the number which you want to check whether it is abundant or not: "))

	if is_abundant_number(input_val):
		print(f"The input number {input_val} is an abundant number")
	else:
		print(f"The input number {input_val} is not an abundant number")
