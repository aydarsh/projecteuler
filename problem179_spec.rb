require "./problem179"

describe 'have_same_num_divisors?' do
	it 'finds for 14 and 15' do
		have_same_num_divisors?(14, 15).should be_true
	end
end