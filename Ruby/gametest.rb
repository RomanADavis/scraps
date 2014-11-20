require "gosu"

class GameWindow < Gosu::Window
  def initialize(width, height, fullscreen_bool)
    super(width, height, fullscreen_bool)
    
    @sprite = Gosu::Image.new(self, "box.png", false)
    @x = width / 2
    @y = height / 2
    @total_time = 0
  end
  def update
    @total_time += 16.0
    
    @y = 300 + Math.sin(@total_time * 0.1) 
  end
  def draw
    @sprite.draw(@x, @y, 0)
  end
end

game_window = GameWindow.new(800, 600, false)
game_window.show