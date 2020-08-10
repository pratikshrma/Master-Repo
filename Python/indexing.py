name='Hello Boi'
digits=[0,1,2,3,4,5,6,7,8,9]
print(digits[-1])

# this is simple indexing
print(digits[0])

# this is negative indexing this will count from the back so it will pick the last ie 9
print(digits[-1])

# what if youa wanna give a range or chunks of an array
# this will alse work for array/string

print(digits[0:9])
print(name[0:5])

#Now stride or some shit
# this will skip every second element
# you can also use -ve stride

print(digits[0:9:2]) 
# if you wanna rev it you gotta change the first two also

print(digits[9:0:-2])

for i in range(len(digits)):
    print(digits[0:i])

for i in range(len(digits)):
    print(digits[i:i+3])
    if digits[i]==7:
        break

Window_Size=6
for i in range(len(digits)-(Window_Size-1)):
    print(digits[i:i+Window_Size])
