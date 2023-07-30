# Write your MySQL query statement below

# 1.
SELECT w2.id from Weather w1,Weather w2
WHERE datediff(w2.recordDate, w1.recordDate) = 1 AND w2.temperature > w1.temperature;
# // where datediff -> date difference b/w two dates
# # 2.
# SELECT w2.id from Weather w1, Weather w2
# WHERE w2.temperature > w1.temperature AND
# subdate(w2.recordDate, 1) = w1.recordDate;
# // where subdate -> subtract date 

# #3.
# SELECT w2.id from Weather w1 JOIN Weather w2
# ON w2.temperature > w1.temperature AND
# datediff(w2.recordDate,w1.recordDate) = 1;