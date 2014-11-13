# roman.rb
roman_mapping = {
  1000 => "M",
  900 => "CM",
  500 => "D",
  400 => "CD",
  100 => "C",
  90 => "XC",
  50 => "L",
  40 => "XL",
  10 => "X",
  9 => "IX",
  5 => "V",
  4 => "IV",
  1 => "I"
}

def roman(num, hash, result="")
  return result if num == 0
  hash.keys.each do |key|
    q, num = num / key, num % key
    result << hash[key] * q
    return roman(num, hash, result) if q > 0
  end
end

def iter_roman num
  
end

p roman 2003, roman_mapping
p 20.divmod(6)

roman_mapping = {
  "M" => 1000,
  "CM" => 900,
  "D" => 500,
  "CD" => 400,
  "C" => 100,
  "XC" => 90,
  "L" => 50,
  "XL" => 40,
  "X" => 10,
  "IX" => 9,
  "V" => 5,
  "IV" => 4,
  "I" => 1
}

def namor hash, roman, num=0
  return num if roman == ""
  hash.keys.each do |key|
    if roman.split("")[0] == key
      num += hash[key]
      roman = roman.split("").shift.join
      return namor hash, roman, num if num > 0
    end
  end
end

namor roman_mapping, "MMIII"