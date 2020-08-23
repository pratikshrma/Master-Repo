import requests
from bs4 import BeautifulSoup

page=requests.get('https://forecast.weather.gov/MapClick.php?textField1=34.05&textField2=-118.25#.X0HZAXUza-8')
soup=BeautifulSoup(page.content,'html.parser')
week=soup.find(id="seven-day-forecast-body")
# print(week)

items=week.find_all(class_='tombstone-container')
print(items[0])