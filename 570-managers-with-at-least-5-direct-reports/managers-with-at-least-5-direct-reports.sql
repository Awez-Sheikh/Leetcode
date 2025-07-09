# Write your MySQL query statement below
select e.name from Employee as e
join Employee as m
on e.id=m.managerId
where m.managerId is not null
group by m.managerId having count(*) >= 5
