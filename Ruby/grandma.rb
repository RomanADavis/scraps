puts "WHAT'S THAT, SONNY?"
reply = gets.chomp

while reply != "BYE"    
    if reply != reply.upcase
        puts "HUH?! SPEAK UP SONNY!"
        reply = gets.chomp
    else
        year = (1930 + rand(20)).to_s
        puts "NO, NOT SINCE #{year}!"
        reply = gets.chomp
    end
end