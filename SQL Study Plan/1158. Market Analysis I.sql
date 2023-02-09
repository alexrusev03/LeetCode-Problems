# Write your MySQL query statement below
select u.user_id as buyer_id, u.join_date, COUNT(o.order_date) as orders_in_2019
from Users u
left join Orders o
on u.user_id=o.buyer_id
and year(order_date)="2019"
group by user_id;
