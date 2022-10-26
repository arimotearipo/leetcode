# Link to the leetcode problem
# https://leetcode.com/problems/add-binary/
# I am attempting this problem in python to avoid bit limitation of 
# C++ since the constraints of this problem is set whereby
#  each string input could represent an integer that is
# 1000 bits long

class Solution:
	def addBinary(self, a: str, b: str) -> str:
		one = 0
		two = 0
		for i in range(0, len(a)):
			one <<= 1
			if (a[i] == '1'):
				one += 1
		for i in range(0, len(b)):
			two <<= 1
			if (b[i] == '1'):
				two += 1
		sum = one + two
		if (sum == 0):
			return ("0")
		# print(one)
		# print(two)
		# print(sum)
		result = ""
		while (sum != 0):
			if (sum & 1 == 1):
				result = "1" + result
			else:
				result = "0" + result
			sum >>= 1
		return result

s1 = "11"
s2 = "1"
s = Solution()
s3 = s.addBinary(s1, s2)
print(s3)