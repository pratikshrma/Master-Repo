# Explaining What mutability is in programing
# examples of mutable and immutable devices
# Explanation of how mutability allow us to have secure data

# so touple is is an immutable datatye BUT what is you do something like this

A=(1,2,[1,2,3])
print(A)
# you can not do this like A[1]=3
# bc thats a tuple and you can not change tuple you know immutable shit!!

print(A[2][1])

# but what about 
A[2][0]=3
print(A)

# list inside a tuple and now you could chane the list

# so why this happened bc when we change the list the list the pointer value remained the same
# so tuple thinks oh  it is the same value bc location is still the same
