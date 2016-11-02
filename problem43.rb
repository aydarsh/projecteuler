# -*- encoding : utf-8 -*-
puts [0,1,2,3,4,5,6,7,8,9].permutation.
map{|p| p.join}.
reject!{|str| str.start_with?("0")}.
select!{|num| [num[1,3].to_i%2, num[2,3].to_i%3, num[3,3].to_i%5, num[4,3].to_i%7, num[5,3].to_i%11, num[6,3].to_i%13, num[7,3].to_i%17].all?{|r| r==0}}.
reduce{|sum, num| sum.to_i+num.to_i}
