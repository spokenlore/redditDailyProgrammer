# github.com/spokenlore
# Challenge from reddit.com/r/wiki/challenges

# Easy 12:
# Output all combinations of the characters in an input string

import itertools

def main():
	userInput = raw_input("Input a string.\n")
	print ([''.join(x) for x in itertools.permutations(userInput)])

main()