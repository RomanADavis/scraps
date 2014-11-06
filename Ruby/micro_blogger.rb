require "jumpstart_auth"

class MicroBlogger

  attr_reader :client
  
  def initialize
    puts "Initialize MicroBlogger"
    @client = jumpstartAuth.twitter
  end
end