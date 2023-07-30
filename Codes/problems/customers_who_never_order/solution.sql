# Write your MySQL query statement below

SELECT name as Customers
FROM Customers c
LEFT JOIN Orders o ON c.id = o.customerId
GROUP BY c.id
HAVING COUNT(o.id)=0;

# SELECT name as Customer
# FROM Customers c
# LEFT JOIN Orders o ON c.id = o.customerId;