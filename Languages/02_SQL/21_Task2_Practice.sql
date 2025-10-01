-- for the  task 2
create database mydb;

use mydb;

create table student(student_id int , name varchar(100) , age int , grade char(1) , email varchar(100));

insert into student(student_id , name , age , grade ,email) values(1 , 'Alen' , 20 , 'A' , 'Alen@gmail.com') , 
																(2 , 'Bob' , 22, 'B' , 'bob@gmail,com'),
                                                                (3 , 'Charlie' , 21 , 'A' , 'charlie@gmail.com');
                                                                
select * from student;

-- add one new record to the  student table
insert into student(student_id , name , age , grade , email) values(4 , 'Rahul' , 25 ,'C' ,'rahul@gmail.com');

-- retrieve all student from the table
select * from student;

 -- modify bob grade to a
update student set grade = 'A' where name = 'Bob';

select * from student;

-- remove the student has name charlie from  table
delete from student where name = 'charlie';

select * from student;

drop table student;
drop database mydb;

