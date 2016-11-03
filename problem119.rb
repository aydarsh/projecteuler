a=[]
(5000000..8000000).each_with_object(a) do |i| 
	d_sum = i.to_s.chars.inject{|sum, d| sum.to_i+d.to_i}
	if (2..5).to_a.map{|n| d_sum**n}.any?{|num| num==i}
		a<<i
		p a
	end
end
p a