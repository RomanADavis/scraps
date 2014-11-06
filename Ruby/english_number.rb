def english_number num
    if num == 0
        return "zero"
    end
    english = ""
    ones = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    tens = ["", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]
    exceptions = ["", "eleven", "twelve", "thirteen"]
    big_place = num/ 100
    if big_place != 0
        english = english_number big_place + " hundred"
    end
    tens_place = num/10
    ones_place = num % 10
    if tens_place == 1
        if 0 < ones_place  and ones_place < 4
            english += exceptions[ones_place]
        elsif ones_place == 0
            english += tens[tens_place]
        else
            english += ones[ones_place] + "teen"
        end
    else
        english += tens[tens_place] +" "+ ones[ones_place]
    end
    return english
end

bottles = 99
while bottles > 0
    how_many = english_number bottles
    chorus = how_many.capitalize + " bottles of beer"
    puts "#{chorus} on the wall!"
    puts "#{chorus}!"
    puts "Pass one down, let it get drown!"
    puts "#{chorus} on the wall!"
    puts ""
    bottles -= 1
end