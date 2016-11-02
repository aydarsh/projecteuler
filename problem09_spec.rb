require "./problem09.rb"

describe 'Pythagorean triplet' do
	it 'finds for [3, 4, 5]' do
		pythagorean_triplet?([3, 4, 5]).should be true
	end
end