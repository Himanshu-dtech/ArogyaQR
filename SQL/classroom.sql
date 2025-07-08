create database college;
use college;
create table student( 
id int primary key,
 Name VARCHAR(50),
 age int not null
);
Insert into student values(1,"Adi",21);
Insert into student values(2,"Sudi",19);
Select * from student;

use college;
create table students( 
rollno int primary key,
 name varchar(50),
 marks int not null,
 grade varchar(1),
 city varchar(20)
 );
 insert into students 
 (rollno,name,marks,grade,city)
 values
 (101,"anil",78,"C","Pune"),
 (102,"bhumika",93,"A","Mumbai"),
 (103,"chetan",85,"B","Mumbai"),
 (104,"dhruv",96,"A","Delhi"),
 (105,"emanuel",12,"F","Delhi"),
 (106,"farah",82,"B","Delhi");
 select name,marks, city from students;
select * 
from students 
where marks between 80 and 90 and city in("Delhi","mumbai");
select * from students
order by marks desc;
select name,marks/1 as percentage from students;
select city,count(name),max(marks)  from students group by city order by city desc;
use college;
select city,marks,count(rollno)
from students
where grade="A"
group by city,marks
having marks>90
order by city asc;
set sql_safe_updates =0;
update students
set grade="O"
where grade="A";
update students
set grade="D"
where marks<70;
select * from students;
delete from students
where marks<80;
alter table students
change name full_name varchar(50);
alter table students
drop column grade;




