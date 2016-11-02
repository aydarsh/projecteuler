a_enc_words = File.open("/home/aydar/Documents/dev/cipher1.txt").read.split(',').map{|num| num.to_i}

p words = a_enc_words.
	each_slice(3).
	map{|a_word| a_word.zip('god'.bytes.to_a).map{|el| el[0]^el[1]}.
	pack("ccc")}.to_a.join
	#p words 
	#break if words.all?{|word| ('aaa'..'zzz').include? word}


#a_enc_words.each_slice(3) do |a_enc_word|
#	('aaa'..'zzz')
#end
#('aaa'..'zzz').include? [79,59,12].zip([10,11,13]).map{|a| p a[0]^a[1]}.pack("ccc")