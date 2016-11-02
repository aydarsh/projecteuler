require 'prime'
(1000..9999).
select{|p| p.prime?}.
map{|p| 
		p.to_s.chars.to_a.permutation.
		map{|num| num.join}.uniq.
		reject{|num| num.start_with?"0"}.
		map{|num| num.to_i}.
		select{|num| num.prime?}
	}.
map{|a| a.sort}.
uniq.
select{|a| a.length>3}.
select{|a| (a[0]+a[2])/2==a[1] or 
	(a[0]+a[3])/2==a[1] or (a[0]+a[3])/2==a[2] or 
	(a[1]+a[3])/2==a[2]}.
each{|a| p a}