bottles = 99

while bottles > 0
    chorus = "#{bottles.to_s} bottles of beer"
    puts "#{chorus} on the wall!"
    puts "#{chorus}!"
    puts "Pass one down, let it get drown!"
    puts "#{chorus} on the wall!"
    puts ""
    bottles -= 1
end