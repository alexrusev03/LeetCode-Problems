# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
delete pers1 from person pers1,person pers2 
where pers1.email=pers2.email and pers1.id>pers2.id;
