# Write your MySQL query statement below
select(
    select * from MyNumbers 
    GROUP BY num having count(*) = 1
    ORDER BY num desc 
    LIMIT 1
) as num;