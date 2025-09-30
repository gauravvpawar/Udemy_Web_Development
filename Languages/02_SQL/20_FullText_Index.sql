-- find the fullname index use

create database mydb;

use mydb;

create table books(title varchar(100) , description text);

drop table  books;

insert into  books(title , description) values('demon  slayer' , 'Story about the a Boy who can wish his sister had become demon he wants she became human again ' ) ,
												('Attack on titan' , 'A boy had a dream from born to death he wants freedom from titans') ,
                                                ('Death note' , 'It is story about Person is fight for the to reduce criminal on earth but he became a criminal');

select * from books;

create fulltext index full_Search on books(title , description);

select * from books where match(title , description) against('human');

select * from books where match(title, description) against('titan');

drop table books;
drop database mydb;
