# Write your MySQL query statement below
select department ,employee ,salary from (select d.name as department ,
    e.name as employee , e.salary, dense_rank () over (partition by e.departmentid order by salary desc) as rnk from employee e join department d on e.departmentid = d.id)
    as ranked where rnk<4;