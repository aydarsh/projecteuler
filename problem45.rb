# -*- encoding : utf-8 -*-
a_result=[]
a_size=100000
P=Array.new(a_size){|i| i*(3*i-1)/2}
P.each do |n|
	num = Math.sqrt(1+8*n)
	if num**2 == 1+8*n and (1+num)%4==0 and (-1+num)%2==0
		a_result<<n
	end
end
p a_result
