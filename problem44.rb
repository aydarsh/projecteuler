a_size = 2500
h=Hash[(1..a_size).to_a.map{|i| [i, i*(3*i-1)/2]}]
h.each do |n, value|
	n.downto(2) do |i|
		p value-h[i-1] if [value - h[i-1], value + h[i-1]].all?{|num| r = (Math.sqrt(1+24*num)+1)/6; r.to_i == r}
	end
end
	
