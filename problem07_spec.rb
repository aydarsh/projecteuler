require "./problem07.rb"

describe 'nth prime number' do
	it 'finds 6th prime number' do
		nth_prime(6).should == 13
	end
end