# fib_pos.rb

def fib_pos num
  a, b, fib = 1, 1, 0
  num.times {a, b, fib = b, b + a, a}
  return fib
end 

def fib_pos_rec num
  return 0 if num == 0
  return 1 if num == 1
  fib_pos_rec(num - 1) + fib_pos_rec(num - 2)
end

p fib_pos 6
p fib_pos_rec 6