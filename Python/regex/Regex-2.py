import re
text='random String. Heloo my name is amnshrma3_4-1@gmail.com hello some more random text yourName@Company.com'
pattern=re.compile('[a-zA-Z0-9\.\-\_]+@+[a-zA-Z0-9\.\-\_]+\.+[a-z]+')
# so the meaning of that + in the end is to tell the python that best match + whatever is attached to it S
result=pattern.search(text)
print(result)
# nwo the search will only find one if you wanna find all of them then you need to add findall
result=pattern.findall(text)
print(result)
