require "./problem04.rb"

describe 'the largest palindrome from the product of two n-digit numbers' do
	it 'finds the largest palindrome from the product of two 2-digit numbers' do
		palindrome_of_product(2).should == 9009
	end
end