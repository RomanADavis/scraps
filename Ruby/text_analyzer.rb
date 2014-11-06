# text_analyzer.rb
lines = File.readlines("oliver.txt")
text = lines.join
stop_words = %w{the by a on for of are with just but and to my I has some in}

line_count = lines.size
char_count = text.length
chars_ex_spaces = text.gsub(/\s+/, "").length
words = text.split(" ")
word_count = words.length
sentences = text.split(/\.|\?|!/).length
paragraphs = text.split(/\n\n/).length
keywords = words.select { |word| !stop_words.include? word }.length


puts "#{line_count} lines."
puts "#{char_count} characters"
puts "#{chars_ex_spaces} characters (excluding spaces)"
puts "#{word_count} words"
puts "#{sentences} sentences"
puts "#{paragraphs} paragraphs"
puts "#{sentences / paragraphs} sentences per paragraph (average)"
puts "#{word_count / sentences} words per sentence (average)"
puts "#{keywords.to_f/ word_count.to_f * 100}% of the words are interesting."