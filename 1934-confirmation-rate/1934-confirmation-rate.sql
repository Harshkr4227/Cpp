# Write your MySQL query statement below
select s.user_id,
    round(avg(case when c.action = 'confirmed' then 1 else 0 end), 2) as confirmation_rate
FROM Signups s left join Confirmations c
ON s.user_id = c.user_id
group by s.user_id
order by confirmation_rate DESC;