sum=0
(1..1000000).each do |num|
	if ((num.to_s==num.to_s.reverse) && (num.to_s(2)==num.to_s(2).reverse))
	sum+=num
	end
end
	
puts sum	
