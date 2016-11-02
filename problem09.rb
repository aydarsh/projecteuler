def pythagorean_triplet?(triplet)
	triplet[0]**2 + triplet[1]**2 == triplet[2]**2
end

def find_triplet
	(1..333).each do |a| 
		((a+1)..((1000-a)/2).floor).each do |b| 
			if a*a+b*b == (1000-a-b)*(1000-a-b)
				return [a, b, 1000-a-b]
			end
		end
	end
end

p find_triplet.reduce(:*)
