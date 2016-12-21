# Python client written for Python 2/3
try: # python 3 version
	import urllib.request
	response = urllib.request.urlopen('http://169.254.100.100')
except ImportError: # python 2 version
	import urllib2
	response = urllib2.urlopen('http://169.254.100.100')

print(response.read())
