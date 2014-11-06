var some_array = [99, 123, 144, 12, 64, 77, 119, 700, 12, 2, 0, 5];

var my_max = function(numbers) {
  var max = numbers[0];
  for(var i = 1; i < numbers.length; i++) {
    if(numbers[i] > max) {
      max = numbers[i];
    }
  }
  return max;
};

console.log(my_max(some_array));