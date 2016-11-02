require "./problem08.rb"

describe 'maximum product of n adjacent digits' do
	it 'finds for 4 digits' do
		maximum_product_of_adjacent_digits(4).should == 5832
	end
end