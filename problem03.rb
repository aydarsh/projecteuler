require "prime"

def largest_prime_factor(num)
	Prime.prime_division(num).last[0]
end

p largest_prime_factor(600851475143)