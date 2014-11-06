# spec/cell_spec.rb
require "spec_helper"

module TicTacToe
  describe Cell do
    
    context "#initialize" do
      it "is initialized with the value '' by default." do
        cell = Cell.new
        expect(cell.value).to eq ""
      end
      it "can be initialized with value 'X'." do
        cell = Cell.new("X")
        expect(cell.value).to eq "X"
      end
    end
    
  end
end