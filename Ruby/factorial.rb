# factorial.rb
def factorial num
  while num > 1
    num *= num -1
    num -= 1
  end
  answer
end

def factorial_rec num
  return 1 if num == 1 
  num * factorial_rec(num - 1)
end

puts factorial_rec 1
puts factorial_rec 2
puts factorial_rec 3
puts factorial_rec 4
puts factorial_rec 5
puts factorial_rec 6
puts factorial_rec 7
puts factorial_rec 8