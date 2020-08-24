from selenium import webdriver 
DRIVER_SOURCE='/home/tank/Desktop/geckodriver'
driver = webdriver.Firefox(executable_path=DRIVER_SOURCE) 
  
driver.get("https://google.com") 

# its kinda not working

# because these geckodriver aint compatible with firewfox esr only with regular firefox