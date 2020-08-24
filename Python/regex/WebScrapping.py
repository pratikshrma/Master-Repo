import requests
from bs4 import BeautifulSoup
import pandas as pd 

page=requests.get('https://forecast.weather.gov/MapClick.php?textField1=34.05&textField2=-118.25#.X0HZAXUza-8')
soup=BeautifulSoup(page.content,'html.parser')
week=soup.find(id="seven-day-forecast-body")
items=week.find_all(class_='tombstone-container')
i=0
day=[]
desc=[]
temp=[]
# print(items[0])
while i<8:
    day.append(items[i].find(class_="period-name").get_text())
    desc.append(items[i].find(class_="short-desc").get_text())
    temp.append(items[i].find(class_="temp").get_text())
    i+=1
    # print("+++++++++")

# now a for loop just for fun
# period_name=[items.find(class_="period-name").get_text() for items in items]
# this is just a for loop i just implemented a while loop
 
df=pd.DataFrame(
    {
        "Day":day,
        "Descreption":desc,
        "Temperature":temp
    }
)

# print(df)
df.to_csv("First.csv")