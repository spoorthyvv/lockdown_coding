'''
Example
If the original string is "Welcome to AIET" and the user inputs string to remove "co" then the it should print "Welme to AIET" as output .
Input
First line read a string
Second line read key character to be removed.
Output
String which doesn't contain key character
'''

s = input('Enter The Main String: ')
a=input('Enter The Sub String: ')
print(s.replace(a, ''))