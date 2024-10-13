-- Write your PostgreSQL query statement below
SELECT name
FROM SalesPerson
WHERE sales_id NOT IN
(
    SELECT sales_id
    FROM Company NATURAL JOIN Orders
    WHERE name = 'RED'
);
