# lets make an email address text scrapper
# regex is regular expression

import re

text='Random StringB B'
# ok so what this bracket does is that it searches for A/B/C/r/d/m in the given text you can put as much as you want in it.
# now it stops as it founds the first match it can be either A/B/C/r/d/m
pattern=re.compile('[ABCrdm]')
result=pattern.search(text)
print(result)

# /now you could also put a range 

pattern=re.compile('[A-Za-c]')
result=pattern.search(text)
print(result)
# this is a range from a-c and you could also combine 

# now here some intresting part you could add a + operator in this to do some crazy stuff
pattern=re.compile('[A-Z,a-z]+')
result=pattern.search(text)
print(result)
