begin
declare @a as int;
set @a=1;
while(@a<10)
begin
	print 'a='+cast(@a as varchar(20))
	set @a=@a+1;
	end
endbegin
declare @a as int,@b as int,@c as int;
set @a=15;
Set @b=20
set @c=10;
print 'The largest number is'
if(@a>@b)and(@a>@c)
print @a
else if(@b>@c)
print @b
else
print @c
end


begin
declare @i as int;
set @i=1
declare @m as int;
set @m=5
while(@i<=10)
begin
print cast(@m as varchar(20))+'x'+cast(@i as varchar(20))+'='+cast(@m*@i as
varchar(20))
set @i=@i+1;
end
end