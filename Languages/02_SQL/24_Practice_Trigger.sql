
-- Performming to inset entries in registration table also when enter data in student table also

create database testing;
use testing;
create table student(name varchar(100) , email varchar(100), password varchar(100) , cnfPassword varchar(100));
create table registration(name varchar(100), email varchar(100) , reg_date date not null , reg_time time not null);

show tables;


DELIMITER //

CREATE TRIGGER after_student_insert
AFTER INSERT ON student
FOR EACH ROW
BEGIN
    INSERT INTO registration(name, email, reg_date, reg_time)
    VALUES (NEW.name, NEW.email, CURDATE(), CURTIME());
END;

//

DELIMITER ;


insert into student values("Gaurav" , "gaurav@gmail.com" , "gaurav@123" , "gaurav@123");

select * from student;
select * from registration;

show triggers from testing;

drop table student;
drop table registration;
