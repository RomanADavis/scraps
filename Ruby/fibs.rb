# fibs.rb
def fibs num
  fib1, fib2, sequence = 1, 1 , [0]
  num.times do
    sequence << fib1
    fib1, fib2 = fib2, fib1 + fib2
  end
  sequence
end

def fibs_rec(num)
  return [0, 1] if num == 1
  fibs_rec(num - 1) << fibs_rec(num - 1)[-1] + fibs_rec(num -1)[-2]
end

p fibs 5
p fibs_rec 5