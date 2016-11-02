require "prime"

def number_div_by arr
	arr.map{|num| Prime.prime_division(num)}.
	flatten(1).uniq.sort.
	group_by{|pair| pair[0]}.map{|k, v| v.last }.
	inject(1){|int, pair| int*pair[0]**pair[1] }
end

p number_div_by((2..20))