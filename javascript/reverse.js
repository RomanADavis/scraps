var some_string = "We, who are about to die, salute you.";

var reverse = function(string) {
  var new_string = "";
  for(var i = 1; i <= string.length; i++) {
    new_string += string[string.length - i];
  }
  return new_string;
};

console.log(reverse(some_string));