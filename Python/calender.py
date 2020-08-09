# why learn about this to automate something like do this on this date or 
# send message on this date etc.

import calendar
import datetime
import time

print(calendar.weekheader(3))

# it just spits out the month in a regular way
print(calendar.month(2020,3,9))

# it gives every thing in a string format
print(calendar.monthcalendar(2019,3))

# print full year 
print(calendar.calendar(2020))

# to find if a year is al leap year or not
is_leap=calendar.isleap(2000)
print(is_leap)


# to check how many leap years are there in a given range of years and it is an inclucive function
how_many_leap_years=calendar.leapdays(2000,20200)
print(how_many_leap_years)

# i aint gonan tell you every thing here go search the other two modules?libs on your own 
# id time,datetime those are usefull too
ticks=time.time()
print(ticks)