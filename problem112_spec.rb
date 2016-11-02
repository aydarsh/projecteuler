require "./problem112"

describe 'bouncy number' do
	it 'finds for 134468' do
		134468.should_not be_bouncy
	end
	it 'finds for 66420' do
		66420.should_not be_bouncy
	end
	it 'finds for 155349' do
		155349.should be_bouncy
	end
end