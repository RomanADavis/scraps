puts "What's your first name?"
first = gets.chomp
puts "Last name?"
last = gets.chomp
puts "Middle name?"
mid = gets.chomp
puts "Nice to meet you, " + first + " " + mid + " " + last + "."
puts "What's your favorite number?"
num = gets.chomp.to_i
better = (num + 1)
puts "Oooh. Your favorite number is #{num}? Well, mine is #{better}!"