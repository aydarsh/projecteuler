require './problem03.rb'

describe 'the largest prime factor of a number' do
	it 'finds the largest prime factor of 13195' do
		largest_prime_factor(13195).should == 29
	end
end