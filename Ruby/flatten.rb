# flatten.rb
def flatten list, result = []
  list.each |i|
    i.is_a? Array ? flatten element, result : result << element
  end
  result
end

def flatten_iter list
end
