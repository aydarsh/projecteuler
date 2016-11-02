require "matrix"

def num_right_triangles n
	(0..n).to_a.
	repeated_permutation(2).to_a.drop(1).
	combination(2).
	map{|el| [Vector.elements(el[0]), Vector.elements(el[1])]}.
	select do |el| 
		el[0].inner_product(el[1])==0 or 
		el[0].inner_product(el[1]-el[0])==0 or 
		el[1].inner_product(el[1]-el[0])==0
	end.size
end

p num_right_triangles 50