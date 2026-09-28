# Write your MySQL query statement below
select e.id 
from Weather e
join weather w
on datediff(e.recordDate, w.recordDate) = 1
where e.temperature > w.temperature;