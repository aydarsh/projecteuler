def sum_of_squares_minus_square_of_sum(num)
	(1..num).reduce(:+)**2 - (1..num).map { |num| num*num  }.reduce(:+)
end

p sum_of_squares_minus_square_of_sum(100)