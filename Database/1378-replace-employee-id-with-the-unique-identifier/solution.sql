# Write your MySQL query statement below
select j.unique_id, e.name
from employees e left join employeeuni j on j.id=e.id
