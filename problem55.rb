# -*- encoding : utf-8 -*-
def Lychrel? num
	i=0
	begin
		num = num + num.to_s.reverse.to_i
		i = i+1
	end while i<50 and num.to_s != num.to_s.reverse

	if i==50
		true
	else
		false
	end	
end

p (1..10000).select{|num| Lychrel? num}.length
