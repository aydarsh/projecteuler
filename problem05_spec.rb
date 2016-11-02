require './problem05.rb'

describe 'number divisible by each of even numbers in 1,...,20' do
	it 'finds for all numbers in 1,...,10' do
		number_div_by((1..10)).should == 2520
	end
end