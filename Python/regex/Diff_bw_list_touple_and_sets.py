# LISTS;

# creating a list
List=[]
print("Blank List: ")
print(List)

#Creating a list of number
List=[10,20,12]
print("\n List of number: ")
print(List)

#creating a list of strings and accesssing
List=["Hello","Boi","What's","Up"]
print("\nList Items: ")
print(List[0])
print(List[2])

# NOW TIME FOR TOUPLE
# creating an empty tuple

Tuple=()
print("Initial empty Tuple: ")
print(Tuple)

# Creating a tuple with a list
list1=[1,2,3,4,5,6]
print("\n Tuple using list ")
print(tuple(list1))

# creating a tuple using built in functions
tuple1=tuple('Geeks')#i think tuple cannot only take one word at a time i think so 
#idk gotta do some more experiments 
print("\n Tuple with the use of Function: ")
print(tuple1)

# NOW SETS
# Creating a set
set1=set()
print("Initial Blank Set: ")
print(set1)

# creating a set with the help of a constructor(using object to store string)
String='GeeksForGeeks'
set1=set(String)
print("\nSet with the use of an Object: ")
print(set1)

# Creating a set with the use of the list
set1=set(["Hello","Boi","Whats","up"])
print(set1)
