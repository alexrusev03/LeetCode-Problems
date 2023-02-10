# Write your MySQL query statement below
select product_id,product_name 
from Product where product_id not in 
(
select p.product_id
from Product p
left join Sales s
on s.product_id=p.product_id
where sale_date<'2019-01-01' or sale_date>'2019-03-31' or s.seller_id is null 
);
