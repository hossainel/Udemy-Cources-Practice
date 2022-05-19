import pandas as pd
data = pd.read_csv('Airlines.csv')
print(data.head()) # gets a few
print(data.head(20)) # get 20 of data
print(data.info)

import requests
from bs4 import BeautifulSoup

response = requests.get('https://en.wikipedia.org')

print(response)
print(response.text)

soup = BeautifulSoup(response.text, 'html.parser')

print(soup.title)
