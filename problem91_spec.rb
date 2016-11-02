require './problem91'

describe 'number of right triangles' do
	it 'finds for coordinates from 0 to 2' do
		num_right_triangles(2).should == 14
	end
end