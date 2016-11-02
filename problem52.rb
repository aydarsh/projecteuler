start = Time.now
answer=0
num=10
while answer==0 do 
 if num.to_s.length == (num*6).to_s.length
	if [num*2, num*3, num*4, num*5, num*6].all?{|el| num.to_s.split('').sort == el.to_s.split('').sort}
	answer = num
	end
 end
 num = num.next
end
print answer
puts "",Time.now - start

