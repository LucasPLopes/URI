--2611 Filmes de Ação
 select m.id as id, m.name as name from movies as m,genres as g where m.id_genres=g.id and description='Action';
