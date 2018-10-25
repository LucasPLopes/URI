--2613	Filmes em Promoção
select m.id as id, m.name as name from movies as m inner join  prices as
p  on m.id_prices=p.id where p.value<2.00;
