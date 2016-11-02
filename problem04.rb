def palindrome_of_product(n)
	(10**(n-1)...10**n).to_a.product((10**(n-1)...10**n).to_a).
	map{|pair| (pair[0]*pair[1]).to_s}.
	select{|num| num == num.reverse}.
	map{|num| num.to_i}.max
end

p palindrome_of_product(3)