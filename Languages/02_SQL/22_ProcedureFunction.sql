
create database mydb;

use mydb;

create table student(id int auto_increment, name varchar(100) , primary key(id) );

insert into student(name) values('Gaurav') , 
								('Kaif') ,
                                ('Umesh') ,
                                ('Rahul') ,
                                ('Ganesh');
                                
                                
select * from student;

call show_data();

select * from student  where id = 1;

call find_data_by_id(2);

drop table  student;
drop database mydb;