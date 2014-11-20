# euler35.rb
# This is going to be slow, isn't it?
def prime? n
  (3..Math.sqrt(n)).step(2).each {|i| return false if n % i == 0}
  true
end

def prime_permutations? n
  n.split("").permutation.to_a.map! {|i| i.join("").to_i}.each {|i| return false unless prime? i}
  true
end

count = 1 # 2 is prime
3.steps(100, 2) do |i|
  count += 1 if prime_permutions? n
end  