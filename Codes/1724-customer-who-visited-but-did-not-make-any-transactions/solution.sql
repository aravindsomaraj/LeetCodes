# Write your MySQL query statement below
SELECT customer_id, COUNT(customer_id) as count_no_trans
FROM VISITS
WHERE visit_id NOT IN (
    SELECT v.visit_id
    FROM Visits v Join Transactions USING(visit_id)
    )
GROUP BY customer_id;
