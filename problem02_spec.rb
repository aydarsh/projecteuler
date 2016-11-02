require './problem02.rb'

describe "sum of even Fibonacci terms upto num" do
	it 'finds the sum of Fibonacci terms upto 90. That is for (1,1,2,3,5,8,13,21,34,55,89) we have 2+8+34=44' do
		sum = 0
		Fibonacci_upto(90){|num| if num.even? then sum += num end}
		sum.should == 44
	end
end