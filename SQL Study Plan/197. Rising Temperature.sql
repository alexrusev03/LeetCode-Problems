# Write your MySQL query statement below
select w2.id from Weather as w1, Weather as w2
where w2.temperature>w1.temperature and datediff(w2.recordDate, w1.recordDate)=1;
