require "./problem10.rb"

describe 'Sum of primes below n' do
	it 'finds for 2+3+5+7=17' do
		sum_of_primes_below(10).should == 17
	end
end