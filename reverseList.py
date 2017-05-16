#!/usr/bin/python
import types

def reverseList( input ): #program does nothing as written
	input.reverse()
	for i in input:
		if type(i) is list:
   			reverseList(i)
   	return input

input = [1, [12, 3, [4, [5, 16]]]]
input = reverseList(input)
print input
