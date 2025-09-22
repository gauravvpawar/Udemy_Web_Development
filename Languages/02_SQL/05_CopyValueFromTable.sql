-- to copy the one table value to another table
use mydb;

create table  student2(id int , name varchar(100) , email varchar(100) , number varchar(100));

-- to copy the all values from table 1
insert into student2 select * from student;

select * from student2;

drop table student2;