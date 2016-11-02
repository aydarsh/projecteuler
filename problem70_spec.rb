# -*- encoding : utf-8 -*-
require './problem70'

describe "Euler's totient function" do

	it 'находит euler_phi(0)' do
		euler_phi(0).should == 1
	end
	it 'находит euler_phi(1)' do
		euler_phi(1).should == 1
	end
	it 'находит euler_phi(p) от простых чисел' do
		euler_phi(13).should == 12
	end
	it 'находит euler_phi(87109)' do
		euler_phi(87109).should == 79180
	end
end
