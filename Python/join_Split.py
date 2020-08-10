# String Manipulation

problems='broke,pale,short,nerdy'
print(problems)
# now you can split the string by an operator
l=problems.split(",")
print(l)

lyo=problems.split("short")
print(lyo)

# now what about joining the two strings

joined=' and '.join(l)
print(joined)

csv=' , '.join(l)
print(csv)