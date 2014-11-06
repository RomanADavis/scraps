# lib/wordplay/string.rb

class String
  def sentences
    gsub(/\n|\r/, ' ').split(/\.|\?|!\s*/)
  end
  def words
    scan(/\w[\w\'\-]*/)
  end
  def best_sentence sentences, desired_words
    ranked_sentences = sentences.sort_by |s|
      s.words.length - {s.downcase.words - desired_words).length
    end
    
    ranked_sentences.last
  end
end
p %q{Hello. This is a test of
basic sentence splitting. It
even works over multiple lines}.sentences[1].words[3]

hot_words = %w{test ruby}
my_string = "This a test. Dull sentence here. Ruby is great. So is cake."
p my_string.sentences.find_all { |s| s.downcase.words.any? { |word|  hot_words.include? word } }

