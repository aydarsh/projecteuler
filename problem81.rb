require "matrix"

def min_sum_path m
	sum =	m.[](0, 0)
	i, j = 0, 0
	(0..m.row_size).each do |i|
		(0..m.column_size).each do |j|
			m.[](i, j)=1
		end
		
	end
	p m
	

end

=begin
	for i+1 < m.row_size or j+1 < m.column_size
		if m.[](i+1, j) < m.[](i, j+1)
			sum += m.[](i+1, j)
			i += 1
		else# m.[](i+1, j) >= m.[](i, j+1)
			sum += m.[](i, j+1)
			j += 1
		end

	end
	return 
	=end