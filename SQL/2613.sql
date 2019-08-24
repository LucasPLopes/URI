--2613	Filmes em Promoção
select m.id as id, m.name as name from movies as m join  prices as
p  on p.id = m.id_prices where p.value<2.00;
