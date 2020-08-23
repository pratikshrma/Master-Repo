import datetime
import pytz

today=datetime.date.today()
print(today)

birthDay=datetime.date(2002,9,25)
print(birthDay)

sinceBirth=(today-birthDay).days
print(sinceBirth)


tdelta=datetime.timedelta(days=10)
print(today+tdelta)
# now why would you wanna use this so if you do not use something like this then it can be very confusing some time like feb has only
# 28 days and some months has 30 and 31 days then you might need to consider leap year into account and it gets messy quite easily by!!
# and these date times are objects not the strings so do not get confused


print(today.month)
print(today.day)
print(today.weekday())


# now how to deal with hour and minuits etc,
print(datetime.time(7,2,23,23))
# datetime.date --this is just year month and day
# datetime.time -- this is just hour min and sec milisec
# datetime.datetime -- this is just the combination of everything above
# ie year month day hour min sec mili_sec


hour_delta=datetime.timedelta(hours=10)
print(datetime.datetime.now()+hour_delta)
# add 10 hours to current time


print(datetime.datetime.now(tz=pytz.UTC))