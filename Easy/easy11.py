# github.com/spokenlore
# Challenge from reddit.com/r/dailyprogrammer

# Guidelines: The program should take three arguments. The first will be a day, the second will be month, and the third will be year. Then, your program should compute the day of the week that date will fall on.

# Utilizes algorithm found at Wikipedia: 
# http://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week

def main():

	months = {1:"January", 2:"February", 3:"March", 4:"April", 5:"May", 6:"June", 7:"July", 
	8:"August", 9:"September", 10:"October", 11:"November", 12:"December"}

	year = int(raw_input("Input a year (as a number).\n"))
	while True:
		month = int(raw_input("Input a month (as a number).\n"))
		if month >= 1 and month <= 12:
			break
		else:
			print "%d as a month is invalid. Input another month." % (month)
	while True:
		day = int(raw_input("Input a day (as a number).\n"))
		if month == 2 and day > 28 and (year % 100 == 0 and year % 400 != 0 or year % 4 != 0):
			print "%s is not a leap year. %s can only have a maximum of 28 days on a non leap year." % (year, months[month])
		elif month == 2 and day > 29 and year % 400 == 0:
			print "%s can only have a maximum of 29 days even on a leap year." % (months[month])
		elif day > 30 and (month == 4 or month == 6 or month == 9 or month == 11):
			print "%s can only have a maximum of 30 days." % (months[month])
		elif day > 31:
			print "%s can only have a maximum of 31 days" % (months[month])
		else:
			break

	centuryoffsets = {0:6, 1:4, 2:2, 3:0}
	centuryoffset = year/100 % 4
	centuryoffset = centuryoffsets[centuryoffset]

	monthstable = {1:0, 2:3, 3:3, 4:6, 5:1, 6:4, 7:6, 8:2, 9:5, 10:0, 11:3, 12:5}

	# Testing offset
	# print centuryoffset, "\n"

	weekdays = {0:"Sunday", 1:"Monday", 2:"Tuesday", 3:"Wednesday", 4:"Thursday", 5:"Friday", 6:"Saturday"}	
	weekday = (day+(year%100)+monthstable[month]+(year%100/4)+centuryoffset)%7

	print "The day of the week is: %s" % (weekdays[weekday])

main()