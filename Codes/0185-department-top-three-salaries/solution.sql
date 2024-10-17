-- Write your PostgreSQL query statement below
select dept.name as Department, emp.name as Employee, salary
from Employee emp
JOIN Department dept ON emp.departmentId = dept.id
WHERE salary in (
    SELECT distinct(salary)
    FROM Employee
    where Employee.departmentId = dept.id 
    order by salary Desc
    limit 3
);
