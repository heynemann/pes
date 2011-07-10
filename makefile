clean:
	@find . -name '*.o' -delete
	@find . -name 'solution' -delete

run: clean
	@echo '----------------------------------------'
	@echo '        Running Problem number ${p}'
	@echo '----------------------------------------'
	@echo
	@gcc -std=c99 problem${p}/solution.c -o problem${p}/solution && time problem${p}/solution
