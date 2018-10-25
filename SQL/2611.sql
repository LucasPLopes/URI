--2611 Filmes de Ação
 select movies.id as id, movies.name as name from movies,genres where movies.id_genres=genres.id and description='Action';
