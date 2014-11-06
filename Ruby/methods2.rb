puts "What's your first name?"
first = gets.chomp
puts "...last name?"
last = gets.chomp
puts "...middle name?"
mid = gets.chomp
name_length = first.length + mid.length + last.length
name = first + " " + mid + " " + last 
puts "Did you know that there are #{name_length.to_s} letters in #{name}?"