# -*- encoding : utf-8 -*-
a=[]
N=7000000000000000
(2..25).each do |pow|
	(2..(N**(1.0/pow)).round).each do |num|
		n = num**pow
		if num==n.to_s.chars.inject{|sum, d| sum.to_i+d.to_i}
			a<<n
			p a
		end
	end
end
p a
p a.size
