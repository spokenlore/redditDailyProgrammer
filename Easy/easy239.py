def main():
	num = 31337357
	while (num != 1):
		if (num % 3 == 0):
			num = num/3
			print num/3, 0
		elif ((num+1) % 3) == 0:
			num = (num+1) / 3 
			print num, '+1'
		elif ((num-1) % 3) == 0:
			num = (num-1) / 3
			print num, '-1'
	print 1

main()