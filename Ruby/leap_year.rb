puts "This program takes two years, starting with the earliestm and prints out the leap years between them."
puts "Let's get the earliest year, then."
init = gets.chomp.to_i
puts "And the later year, if you please."
last = gets.chomp.to_i

while init <= last
    if init % 4 ==0 and (init % 100 != 0 or init % 400 == 0)
        puts init.to_s
    end
    init+=1
end