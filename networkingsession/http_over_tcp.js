// implementing HTTP over TCP
// go to localhost:4000
var net = require('net');
net.createServer(function (connection) {
  connection.on('data', function (data) {
  	connection.write("HTTP/1.1 200 OK\r\n");
    connection.write("Content-type: text/html \r\n");
    connection.write("\r\n");
    connection.write("hi\r\n\r\n")
    console.log('data: ' + data);
  });
}).listen(4000);