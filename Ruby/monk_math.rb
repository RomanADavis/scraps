def calculate *x
  if x[-1].is_a?(Hash) 
    op = x[-1].keys
    x = x[0..-2]
	return op
    if op == :add
      return x.reduce(:+)
    else
      return x[0] - x[1..-1].reduce(:+)
    end
  else
    return x.reduce(:+)
  end
end

puts calculate(7, 11, 26)
 
puts calculate(6, 7, 8, add: true)