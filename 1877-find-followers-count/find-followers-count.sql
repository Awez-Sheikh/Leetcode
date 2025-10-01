# Write your MySQL query statement below
select user_id,
sum(case when follower_id>='0' then 1 else 0 end) as followers_count
from Followers
group by user_id
order by user_id asc
