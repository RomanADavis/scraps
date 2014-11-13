# insert.rb
# not tested
def insert list
  (1..list.length - 1).each do |j|
    i = j - 1
    while i > 0 && list[i] > list[j] do
      list[i + 1] = list[i]
      i = i - 1
    end
    list[i + 1] = key
  end
end