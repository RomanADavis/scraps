# beer.rb

def beer n
  return "No more bottles of beer on the wall." if n == 0
  "#{n} bottles of beer on the wall.\n" + beer(n - 1)
end

def iter_beer n
  beer = ""
  (1..n - 1).each do |i|
    beer += "#{i} bottles of beer on the wall\n"
    end
  beer += "No more bottles of beer on the wall."
end

puts beer 12
puts iter_beer 12