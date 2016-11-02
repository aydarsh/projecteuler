require './problem81'

describe "min_sum_path" do
	it "is found for a 1x1 array" do
		min_sum_path(Matrix[[2]]).should == 2
	end
	it "is found for a 2x2 array" do
		min_sum_path(Matrix[[131, 673],[201, 96]]).should == 428
	end
	it "is found for the case 5x5 array"
	it "is found for a 4x4 array with same numbers"
	it "is found for a 4x4 array the path ending on the right"
	it "is found for a 4x4 array the path ending at the bottom"
end