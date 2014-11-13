require "socket"
require "uri"
require "json"

server = TCPServer.open 2000
loop {
  client = server.accept
  client.puts Time.now.ctime
  client.puts "Closing the connection, bye!"
  client.close
}