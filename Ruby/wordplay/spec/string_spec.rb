require "spec_helper"

describe String do
  context "#sentences" do
    it "splits a string into an array of sentences" do
      test = "This is a test. Of sentences. Fail. Or. Pass."
      expect(test.sentences[-1]).to eq "Pass"
    end
  end
  context "#words" do
    it "splits a string into an array of words" do
      test = "Here's a bunch of words"
      expect(test.words[1]).to eq "a"
    end
  end
end  