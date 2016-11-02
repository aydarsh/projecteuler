puts (11..10**6).
	reject {|num| num%10==0}.
	reject! {|num| (num+num.to_s.reverse.to_i).to_s =~ /[02468]/}.
	length

=begin
def reverse_int(num)
	rev = 0
	n = Math.log10(num).floor
	while num > 0
		rev += (num%10)*10**n 
		num /= 10
		n -= 1
	end
	return rev
end

def sum_has_even_digit?(num)
	return true if (num/(10**Math.log10(num).floor) + num%10).even?
	sum = num + reverse_int(num)
	result = false
	while !result and (sum > 0)
		result ||= (sum%10).even?
		sum /= 10
	end

	return result
end

counter = 0
for i in 11..10**7
	unless i % 10 == 0 or sum_has_even_digit?(i)
		counter += 1
	end
end
puts counter
=end
