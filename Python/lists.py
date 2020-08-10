List_1=[1,'hello',"WhatsUp",4,5,[1,2,3,4]]

List_2=[1,2,3,4]

print(List_1[5])

# side note you could also do this with strings

names=['aman','Kakshil','hello']

print(names[1])

# now to add something to this list

names.append('WhatsUp')
print(names)

# what if you wanna put it somewhere else

names.insert(0,'gery')
print(names)

# what if yoou wanna delete something ans this is case sensitive

names.remove('aman')
print(names)

# what if you wanna reverse it

names.reverse()
print(names)

# what if you wanna sort something

names.sort()
print(names)

# if you wanan itterate over it
for List_21 in List_2:
    print(List_21)


# for target_list in expression_list:
#     print(target_list)

# and thats for loop syntax
