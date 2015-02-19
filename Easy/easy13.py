# github.com/spokenlore
# reddit.com/r/wiki/challenges

# Easy 13
# Calculate the 'year' of a given date

def main():
	months = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

	month = int(raw_input("Please enter a month (as a number).\n"))
	while True:
		day = int(raw_input("Please enter a day (as a number).\n"))
		if day > months[month]:
			print "Invalid date. Please enter another.\n"
		else:
			break
	year = 0
	for x in xrange(0,month):
		year += months[x]
	year += day

	print "The year is: %d" % (year)

main()