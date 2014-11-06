def crazy_sum numbers
  sum = 0
  numbers.each_with_index {|i, index| sum += (i * index)}
  sum
end

def square_nums max
  (1..max).each {|n| (sum||=0) += 1 if n**2 < max}
  sum
end

def crazy_nums max
  crazy_list = []
  (1...max).each do |n| 
    if n % 3 == 0 && n % 5 != 0
      crazy_list << n
    elsif n % 3 != 0 && n % 5 == 0
      crazy_list << n 
    end
  end
  crazy_list
end
puts crazy_sum([2]) == 0 # (2*0)
puts crazy_sum([2, 3]) == 3 # (2*0) + (3*1)
puts crazy_sum([2, 3, 5]) == 13 # (2*0) + (3*1) + (5*2)
puts crazy_sum([2, 3, 5, 2]) == 19 # (2*0) + (3*1) + (5*2) + (2*3)
puts square_nums(5) == 2
puts square_nums(10) == 3
puts square_nums(25) == 4
print crazy_nums(3)
print crazy_nums(10)
print crazy_nums(20) 