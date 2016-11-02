require 'prime'
a=[]
(3..100000).step(2).each do |n|
	[n*n-n+1, n*n-2*n+2, n*n-3*n+3].select{|num| a<<num if num.prime?}
	p [a.length*100/(2*n-1), n]
	if (a.length*100/(2*n-1))<10
		p n
		break
	end
end

