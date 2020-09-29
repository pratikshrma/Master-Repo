import requests
sums=requests.get("http://dataquestio.github.io/web-scraping-pages/simple.html")
print(sums.content)