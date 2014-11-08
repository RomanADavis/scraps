# palindrome.rb
def palindrome string
  (0..string.length/ 2).each {|i| return false if string[i] != string[-i - 1]}
  true
end

puts palindrome "girafarig"
puts palindrome "potato"
puts palindrome "racecar"

def palindrome_rec string
  return true if string.length <= 1
  if string[0]  == string[-1]
    string = string[1..-2]
    palindrome_rec string
  else
    return false
  end
end

puts palindrome_rec "girafarig"
puts palindrome_rec "potato"
puts palindrome_rec "racecar"