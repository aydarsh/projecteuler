def sum_multiples num
	(1...num).select{|number| number%3==0 or number%5==0}.reduce(:+)
end

p sum_multiples 1000