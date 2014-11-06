var some_string = "The rain in Spain falls mainly on the plain.";

var vowel_count = function(string) {
  string = string.toUpperCase();
  var count = 0;
  var vowels = ["A", "E", "I", "O", "U", "Y"];
  for(var i = 0; i < string.length; i++) {
    for(var j = 0; j < vowels.length; j++) {
      if(string[i] == vowels[j]) {
        count++;
      }
    }
  }
  return count;
};

console.log(vowel_count(some_string));