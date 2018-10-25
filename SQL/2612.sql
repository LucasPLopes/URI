
 select m.id as id, m.name as name  from movies as m
 inner join genres as g on m.id_genres = g.id where
 g.description='Action' and m.id in 
 (select distinct ma.id_movies from movies_actors as ma inner join 
 actors as a on a.id= ma.id_actors where a.name='Marcelo Silva' or a.name='Miguel Silva' );
	
