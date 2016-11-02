#not finished
a_size=100000
T=Array.new(a_size){|i| i*(i+1)/2}.drop(10000)
P=Array.new(a_size){|i| i*(3*i-1)/2}.delete_if{|i| i<T.first}.delete_if{|i| i>T.last}
H=Array.new(a_size){|i| i*(2*i-1)}.delete_if{|i| i<T.first}.delete_if{|i| i>T.last}
T.each do |t|
	p t
	if P.include?(t) and H.include?(t) then
		p t
		break
	end
	P.delete_if{|i| i<t}
	H.delete_if{|i| i<t}
end
