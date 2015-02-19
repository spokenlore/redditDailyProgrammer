# reddit.com/r/dailyprogrammer/wiki/challenges
# github.com/spokenlore
# 02/18/2015
# Prompt: Validate a phone number, as if written on an input form.
# Telephone numbers can be written as ten digits, or with dashes, spaces, or dots between the three segments, or with the area code parenthesized.
# White space between segments is optional.

import time
import re
import sys

def main():
	pattern1 = re.compile("\d\d\d\D\d\d\d\D\d\d\d\d")
	pattern2 = re.compile("\d\d\d\d\d\d\d\d\d\d")
	while (1):
		askInput = "Please enter a phone number. This program will tell you if the number is valid. If done checking valid phone numbers, enter 0.\n"
		telNumber = raw_input(askInput)

		if telNumber == 0:
			break
		else:
			if pattern1.match(telNumber) or pattern2.match(telNumber):
				print "%s is a valid phone number.\n" % (telNumber)
			else:
				print "%s is not a valid phone number.\n" % (telNumber)

	print telNumber

main()