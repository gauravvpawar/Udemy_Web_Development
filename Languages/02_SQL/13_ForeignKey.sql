
-- to learn about the foreign key concept
create  database mydb;

use mydb;

create table sudent(id int , name varchar(100) , adharnumber int);
alter table sudent rename student;
alter table student add primary key(id);

insert into student(id , name , adharnumber) values(1 , 'Gaurav',7796482),
													(2 , 'Umesh' , 1223344) , 
													(3, 'kaif',9876923);
                                                    
create table student_info(id int , city varchar(100), foreign key(id) references student(id));

insert into student_info(id , city)  values(1 , 'Nagpur') , 
											(2 , 'Jalna');
                                            
									
insert into student_info(id , city) values(1 , 'Chandrapur');

select * from student_info;

delete from student_info where city = 'Chandrapur';
 
-- you cant delete the data easily they are connected to each other
delete from student where id = 1;

drop table student_info;

drop table student;

drop database mydb;