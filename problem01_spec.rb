require './problem01.rb'

describe "sum of multiples of 3 or 5" do
	it "finds sum_multiples(10)" do
		sum_multiples(10).should == 23
	end
end