require "./problem06.rb"

describe 'sum of squares minus square of sum' do
	it 'finds for the first ten natural numbers' do
		sum_of_squares_minus_square_of_sum(10).should == 2640
	end
end