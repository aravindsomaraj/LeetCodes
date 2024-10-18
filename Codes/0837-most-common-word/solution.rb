# @param {String} paragraph
# @param {String[]} banned
# @return {String}
def most_common_word(paragraph, banned)
    ban_hash = banned.each_with_object({}){|word,obj| obj[word] = true}
    paragraph.downcase.scan(/[a-z]+/).reject{|word| ban_hash[word]}
    .each_with_object(Hash.new(0)){|word,obj| obj[word] += 1}
    .to_a.max_by{|key,value| value}.first
end
