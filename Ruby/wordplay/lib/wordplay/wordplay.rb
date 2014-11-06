# lib/wordplay.rb

class Wordplay
  def self.switch_pronouns text
    text.gsub(/\b(I am|You are|I|You|Your|My)\b/i) do |pronoun|
      case pronoun.downcase
        when "i"
          "you"
        when "you"
          "me"
        when "me"
          "you"
        when "i am"
          "You are"
        when "you are"
          "I am"
        when "your"
          "my"
        when "my"
          "your"
      end
    end.sub(/^me\b/i, "I")
  end
end

while input = gets
  puts ">>" + Wordplay.switch_pronouns(input).chomp + "?"
end