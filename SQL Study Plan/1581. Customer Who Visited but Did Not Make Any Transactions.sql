# Write your MySQL query statement below
select Visits.customer_id, count(Visits.visit_id) as count_no_trans from Visits left outer join Transactions
on Visits.visit_id = Transactions.visit_id
where transaction_id is null
group by customer_id
