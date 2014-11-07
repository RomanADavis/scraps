# untested
def sum_of_array array
  if array.length > 2
    array[-2] = sum_of_array(array[-2:-1])
  elsif array.length > 1
    array[0] = array[0] + array[1]
    array.pop
    array[0]
  else
    array[0]
  end