void euler(int v) {
	while (из v есть хотя бы одно неиспользованное ребро){
		пусть (v;u) - ребро, пометим его использованным
		euler(u)
	}
	print(v)
}