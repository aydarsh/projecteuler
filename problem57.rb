p (1..1000).to_a.
map{|n| Math.log10(Math.sqrt(2).rationalize(1.0/10**n).numerator).ceil > Math.log10(Math.sqrt(2).rationalize(1.0/10**n).denominator).ceil}.
select{|el| el == true}.
length