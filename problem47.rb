# -*- encoding : utf-8 -*-
require 'prime'
(100000..150000).map{|i| [i,i.prime_division.length]}.each_cons(4){|a| p [a[0][0], a[1][0], a[2][0], a[3][0]] if a[0][1]==4 and a[1][1]==4 and a[2][1]==4 and a[3][1]==4}
