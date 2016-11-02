# -*- encoding : utf-8 -*-
require 'prime'
a = []
Prime.each(6000){|p| a<<p}
(a.length.downto 20).each do |num|
	a.each_cons(num){|a2|
	 sum = a2.reduce(:+)
	 if sum.prime? and sum<1000000 and sum>995000
	 	p sum
	 	return
	 end
	}
end
