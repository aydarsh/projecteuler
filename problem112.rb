require "mathn"
require "ruby-progressbar"

class Integer
	def bouncy?
		num_s = self.to_s
		num_join = num_s.chars.sort.join
		not (num_join == num_s or num_join == num_s.reverse) 				
	end
end

progress_bar = ProgressBar.create format: 'Bouncy numbers: %p%% [%B] %t', progress_mark: '+'

ratio_prev=0.1
bouncy_num_counter=0
1.upto 21800 do |num|
	progress_bar.title=num
	bouncy_num_counter += 1 if num.bouncy?
	ratio = bouncy_num_counter*100/num
	if ratio.kind_of? Integer and ratio != ratio_prev
		progress_bar.progress += (ratio - ratio_prev)
		ratio_prev = bouncy_num_counter*100/num
	#	progress_bar.increment
		#p [num, ratio]
	end
	#if ratio.kind_of? Integer and ratio != ratio_prev
	#	p [num, ratio]
	#	ratio_prev = bouncy_num_counter*100/num
	#end
	
	if ratio>90
		#progress_bar.finish
		break
	end
end
