def Fibonacci_upto num
	i1, i2 = 1, 1
	while i2 < num
		i1, i2 = i2, i1+i2
		yield i1		
	end
end

sum=0
Fibonacci_upto(4_000_000){|num| if num.even? then sum += num end}
p sum