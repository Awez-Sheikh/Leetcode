# Write your MySQL query statement below
select p. product_id ,IFNULL(round((sum(u.units*p.price)/sum(u.units)),2),0) as average_price 
from Prices as p left join UnitsSold as u on p.product_id = u.product_id
AND u.purchase_date BETWEEN p.start_date AND p.end_date
group by product_id 