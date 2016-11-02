require "prime"

counter=0
num_div_prev = 1 # number 1 has 1 divisor
2.upto 10**7 do |num|
	num_div_curr = num.prime_division(generator = Prime::TrialDivisionGenerator.new). # 12 = 2**2*3**1
		reduce(1){|res, n| res*(n[1]+1)} # number of divisors is found as (p1_num+1)*(p2_num+1)*..., so for 12 we have (2+1)*(1+1)
	counter += 1 if num_div_prev == num_div_curr
	num_div_prev = num_div_curr
end
p counter