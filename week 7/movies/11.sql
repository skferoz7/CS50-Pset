select title from movies as m join stars as s on m.id=s.movie_id
join people as p on s.person_id=p.id
join ratings as r on m.id=r.movie_id
where p.name='Chadwick Boseman'
order by r.rating desc
limit 5;
