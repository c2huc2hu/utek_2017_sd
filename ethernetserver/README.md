# Ethernet Server
Example code for getting your ethernet shields working. We will be using the Arduino as a server and using a client to make queries to it.

### Summary
1. Attach the shield to your arduino and computer
2. Run the server on the Arduino. In rare cases, you may need to change the IP address of your server. However, make sure that this is an unused IP address. Any local address, e.g. one that begins with 169.254 should be fine.
3. Make a request from your client to the Arduino

Some other things to try when debugging:
- Force refresh (ctrl + shift + R in Chrome) will clear any cached page.
- Opening the serial monitor on the Arduino has reportedly made it work, but I cannot reproduce it.

I don't believe that you need to mess around with static ip addresses at all, you can just set it on the Arduino