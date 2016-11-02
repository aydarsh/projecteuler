# -*- encoding : utf-8 -*-
counter=0
for i in 0..1 do
	for j in 0..2 do
		for k in 0..4 do
			for l in 0..(200-50*k-100*j-200*i) do
				for m in 0..(200-20*l-50*k-100*j-200*i) do
					for n in 0..(200-10*m-20*l-50*k-100*j-200*i) do
						for o in 0..(200-5*n-10*m-20*l-50*k-100*j-200*i) do
							for p in 0..(200-2*o-5*n-10*m-20*l-50*k-100*j-200*i) do
								if i*200+j*100+k*50+l*20+m*10+n*5+o*2+p == 200 
									counter=counter+1
								end
							end
						end
					end
				end
			end
		end
	end
end
puts counter
