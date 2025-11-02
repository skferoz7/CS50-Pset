select p.name from people p
join stars s on p.id=s.person_id
join movies m on s.movie_id=m.id
where m.id in (
    select m.id from movies m
    join stars s on m.id=s.movie_id
    join people p on s.person_id =p.id
    where p.name ='Kevin Bacon' and p.birth=1958
) and p.name != 'Kevin Bacon';
