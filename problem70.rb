# -*- encoding : utf-8 -*-
require 'prime'
require 'mathn'

def euler_phi num
	return 1 if num==0 or num==1
	return num-1 if num.prime?
	return num.prime_division.reduce(1){|res, p| res*(1-1/p[0])}*num
end