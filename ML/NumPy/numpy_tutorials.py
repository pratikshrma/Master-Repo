# side note you should not name your file name after some library name like numpy.py dont do this sort of shit
# numpy_.py,numpy_1.py do something like this but not the numpy.py got it
import numpy as np
a=np.arange(6)
a2=a[np.newaxis, :]
a2.shape
# /thats how you create an array
a=np.array([[1,2,3,4,5,6],[1,4,5,6,7],[3,4,3,6,7,8]])
print(a[0][3])

# it makes an array of 2 filled with zeros
print(np.zeros(2))

# it makes an array of 2 filled with ones
print(np.ones(2))

# it makes an array of 2 filled with empyt
print(np.empty(105))

# now why would you use empty over ones or zeros is because when you initialize zeros 
# and ones it gonan first replace the memory with ones and zeros depending upon which one you selected
# and that can take some time not mush but using empty is generelly faster it just shows you whaterver is in that memory
# but remember to fill it with data 


# it just creates an range of elements
print(np.arange(40))

# now if you wanna make some custom array then
# np.arange(first,last,step_size)
print(np.arange(1,9,2)) 


np.linspace(0,10,num=1)