line_width = 40
c = "Chapter "
p = "page "
puts "Table of Contents".center line_width
puts ""
puts (c + "1: Numbers").ljust(line_width/2) + (p + "1").rjust(line_width/2)
puts (c + "2: Letters").ljust(line_width/2) + (p + "72").rjust(line_width/2)
puts (c + "3: Variables").ljust(line_width/2) + (p + "118").rjust(line_width/2)