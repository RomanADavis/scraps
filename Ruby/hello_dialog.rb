# /hello_dialog.rb
# only works on windows!

require "Win32API"

title = "Hello Dialog"
text = "Hello, world!"

dialog = Win32API.new("user32", "MessageBox", "LPPL", "I")
result = dialog.call(0, text, title, 1)

if result == 1
  puts "Clicked OK"
elsif result == 2
    puts "Clicked Cancel"
else
    puts "Clicked something else!"
end