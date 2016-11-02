require "prime"

def nth_prime(n)
	Prime.first(n).last
end

p nth_prime(10001)