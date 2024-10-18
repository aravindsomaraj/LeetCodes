# @param {Integer[]} widths
# @param {String} s
# @return {Integer[]}
def number_of_lines(widths, s)
    a = s.gsub(/./) { "a#{'.' * (widths[$&.ord - 97] - 2)}b" }.scan(/a.{,98}b/)
    [a.size, a[-1].size]
end
