# Write your MySQL query statement below
SELECT machine_id, 
    round(
        avg(case when 
                activity_type = 'end' then timestamp else -timestamp 
                end) * 2,3) as processing_time
FROM Activity
group by machine_id;