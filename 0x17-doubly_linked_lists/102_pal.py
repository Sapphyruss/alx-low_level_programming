#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]


result = 0

for i in range(100, 1000):
    for j in range(i, 1000):
            product = i * j;
            if is_palindrome(product) and product > result:
                result = product
with open("102-result", "w") as file:
    file.write("{}".format(result))
