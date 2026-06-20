# Write your MySQL query statement below
select unique_id, name 
from EmployeeUNI as eui
right join Employees as e
on e.id = eui.id