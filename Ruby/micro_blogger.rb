require "jumpstart_auth"
# PIN: 9152944817
class MicroBlogger
  attr_reader :client
  
  def initialize
    puts "Initialize MicroBlogger"
    @client = JumpstartAuth.twitter
  end
  
  def tweet message
    @client.update message
  end
  blogger = MicroBlogger.new
  blogger.tweet("MicroBlogger initialized")
end