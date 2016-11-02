require "prime"
#not suitable solution

Prime.each(1000).to_a.delete_if{|p| p==2 || p==5}. # remove 2 and 5 since we get composite numbers, i.e. when combine 7 and 5
combination(3). # probably quicker, if take combinations by 3 numbers, then by 4
select{|el| 
	el.permutation(2).
	all?{|el2| el2.join.to_i.prime?}
}.
flatten.uniq. # take a reduced set of prime numbers, that is remove duplicate primes
combination(4). # now take combinations by 4 numbers
select{|el| 
	el.permutation(2).
	all?{|el2| el2.join.to_i.prime?}
}.
flatten.uniq.
combination(5).
select{|el|
	el.permutation(2).
	all?{|el2| el2.join.to_i.prime?}
}

primes.inject({}){|h, p| h[p]=primes.select{|num| num>p && [p, num].join.to_i.prime? && [num, p].join.to_i.prime?}; h}.reject{|k, v| v.length<5}