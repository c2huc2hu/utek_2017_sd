# Python client written for Python 3
import urllib.request
response = urllib.request.urlopen('http://169.254.100.100')

print(response.read())
