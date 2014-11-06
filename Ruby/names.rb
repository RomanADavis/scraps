names = []
name = 0
puts "I'll stop when you stop giving me names."
while name != ""
    puts "Give me a name."
    name = gets.chomp
    names.push name.capitalize
end

puts names.sort