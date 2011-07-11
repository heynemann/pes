clean:
	@find . -name '*.o' -delete
	@find . -name 'solution' -delete

run: clean
	@echo '----------------------------------------'
	@echo '        Running Problem number ${p}'
	@echo '----------------------------------------'
	@echo
	@gcc -std=c99 -lm -c aux.c problem${p}/solution.c && gcc -std=c99 -lm -o problem${p}/solution aux.o solution.o && time problem${p}/solution

new:
	@cp -r template problem${p}
	@cd problem${p} && sed -i s/{p}/${p}/g solution.c
