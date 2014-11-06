# spec/core_extensions_spec.rb
require "spec_helper"

describe Array do
  context "#all_empty" do
    it "returns true if all elements of an array are empty" do
      expect(["", "", ""].all_empty?).to eq true
    end
    
    it "return false if some of the elements of an array are not empty" do
      expect(["", 1, ""].all_empty?).to eq false
    end
    
    it "returns true for an empty array" do
      expect([].all_empty?).to eq true
    end
  end
  
  context "#all_same?" do
    it "returns true if all elements are the same" do
      expect(["X", "X", "X"].all_same?).to eq true
    end
    
    it "returns false if all elements are not the same" do
      expect(["X", "O", "X"].all_same?).to eq false
    end
    
    it "returns true for an empty array" do
      expect([].all_same?).to eq true
    end
  end
  
  context "#any_empty?" do
    it "returns true if all elements are empty" do
      expect(["","",""].any_empty?).to eq true
    end
    
    it "returns true if some are empty" do
      expect(["", "X", ""].any_empty?).to eq true
    end
    
    it "return false if none are empty" do
      expect(["Pot", "8", "Os"].any_empty?).to eq false
    end
    
    it "returns false for an empty list" do # This is weird, but a useful feature when it gets reversed in #all_empty?
      expect([].any_empty?).to eq false
    end
  end
  
  context "#all_empty?" do
    it "returns true if all elements are empty" do
      expect(["", "", ""].all_empty?).to eq true
    end
    
    it "returns false if any elements are not empty" do
      expect(["X", "", ""].all_empty?).to eq false
    end
    
    it "returns true for an empty list" do
      expect([].all_empty?).to eq true
    end
  end
end