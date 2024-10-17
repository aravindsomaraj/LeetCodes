SELECT e1.name
FROM Employee e
INNER JOIN Employee e1 ON e.managerId = e1.id
GROUP BY e1.id, e1.name
HAVING COUNT(e.id) >= 5;

